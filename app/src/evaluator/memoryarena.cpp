#include "evaluator/botvinamemory.hpp"

bool BotvinaMemory::isDefined(const std::string& varname) const {

 return global_.count(varname);
}

BotvinaMemory::Variable& BotvinaMemory::at(const std::string& varname) {

 return global_.at(varname);
}

void BotvinaMemory::put(const std::string& varname, const Variable& var) {

   global_.insert(std::make_pair(varname, var));
}
