
#ifndef MEMORYARENA_H
#define MEMORYARENA_H

#include "ast/Node.hpp"
#include <forward_list>
#include <unordered_map>
#include <stack>

enum VarType {
  INT,
  FUNC,
  VOID
};

struct Object {
  using FuncPtr = std::shared_ptr<ast::Node>;

  VarType vtype;

  int i;

  FuncPtr func;

  explicit Object(int intval)
    : vtype(VarType::INT),
      i(intval) {
  }

  Object(const FuncPtr& funcptr)
    : vtype(VarType::FUNC),
      func(funcptr) {
  }

  Object():vtype(VarType::VOID){}

};

class BotvinaMemory {
public:
  using Variable = std::shared_ptr<Object>;
  using VarSpace = std::unordered_map<std::string, Variable>;

public:
  bool isDefined(const std::string& varname) const;

  Variable& at(const std::string& varname);
  void put(const std::string& varname, const Variable& var);

private:
  VarSpace global;
};

#endif // MEMORYARENA_H
