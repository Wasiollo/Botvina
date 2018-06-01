#ifndef BOTVINAREALLISTENER_HPP
#define BOTVINAREALLISTENER_HPP
#include "anltr_generated/botvinaBaseListener.h"
#include "antlr4-runtime.h"

class BotvinaRealListener : public botvinaBaseListener{
    void enterAssign_statement(botvinaParser::Assign_statementContext* ctx);
};

#endif // BOTVINAREALLISTENER_HPP
