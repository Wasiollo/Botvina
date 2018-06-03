#include "evaluator/memoryarena.hpp"

bool MemoryArena::isDefined(const std::string& varname) const {

 return global_.count(varname);
}

MemoryArena::Variable& MemoryArena::at(const std::string& varname) {

 return global_.at(varname);
}

void MemoryArena::put(const std::string& varname, const Variable& var) {

   global_.insert(std::make_pair(varname, var));
}
