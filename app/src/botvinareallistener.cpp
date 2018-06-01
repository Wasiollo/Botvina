#include "botvinareallistener.hpp"
#include "anltr_generated/botvinaBaseListener.h"


void BotvinaRealListener::enterAssign_statement(botvinaParser::Assign_statementContext *ctx){
    std::cout<<"kurwa"<<std::endl;
    ctx->children[0]->getText();
}
