
#ifndef MEMORYARENA_H
#define MEMORYARENA_H

#include "ast/Node.hpp"
#include <forward_list>
#include <unordered_map>
#include <stack>

enum VariableType {
  INT, // int values
  FUNC, // for functions
  VOID // for functions which has to draw
};

struct Object {
  VariableType variableType;

  int i;
  std::shared_ptr<ast::Node> func; //added but not used becouse functions are not implemented

  explicit Object(int intval)
    : variableType(VariableType::INT),
      i(intval) {}

  //TODO Constructor for Function objects

  Object():variableType(VariableType::VOID){} // for drawing functions

};

class BotvinaMemory {
public:
  using Variable = std::shared_ptr<Object>;
  using VariableSpace = std::unordered_map<std::string, Variable>;

public:
  bool contains(const std::string& varname) const;
  Variable& at(const std::string& varname);
  void insert(const std::string& varname, const Variable& var);

private:
  VariableSpace globalVarSpace;
};

#endif // MEMORYARENA_H
