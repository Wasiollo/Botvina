#include "evaluator/botvinamemory.hpp"

bool BotvinaMemory::contains(const std::string& varname) const {

 return globalVarSpace.count(varname);
}

BotvinaMemory::Variable& BotvinaMemory::at(const std::string& varname) {

 return globalVarSpace.at(varname);
}

void BotvinaMemory::insert(const std::string& varname, const Variable& var) {

   globalVarSpace.insert(std::make_pair(varname, var));
}
