#include "evaluator/botvinamemory.hpp"

bool BotvinaMemory::isDefined(const std::string& varname) const {

 return global.count(varname);
}

BotvinaMemory::Variable& BotvinaMemory::at(const std::string& varname) {

 return global.at(varname);
}

void BotvinaMemory::put(const std::string& varname, const Variable& var) {

   global.insert(std::make_pair(varname, var));
}
