#include "antlr4-runtime.h"
#include "ast/ast_header.hpp"
#include "anltr_generated/botvinaLexer.h"
#include "anltr_generated/botvinaParser.h"
#include "botvinareallistener.hpp"
#include "catch.hpp"

using namespace antlr4;
using namespace ast;

Ast stringToAst(std::string statement){
    ANTLRInputStream input(statement);
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    botvinaParser parser(&tokens);
    tree::ParseTree* tree = parser.statement();
    BotvinaRealListener botvina_real_listener ;
    tree::ParseTreeWalker::DEFAULT.walk(&botvina_real_listener, tree);
    Ast ast = botvina_real_listener.getAst();
    return ast;
}


TEST_CASE( "AST CLEAR" ) {

    SECTION( "CLEAR ROOT" ) {
      Ast ast = stringToAst("clear;");
      REQUIRE( ast.root.type == ast.root.CLEAR );
    }
}

TEST_CASE( "AST EXIT" ) {

    SECTION( "EXIT ROOT" ) {
      Ast ast = stringToAst("exit;");
      REQUIRE( ast.root.type == ast.root.EXIT );
    }
}

TEST_CASE( "AST LINE" ) {

    SECTION( "LINE ROOT" ) {
      Ast ast = stringToAst("draw line red (20,30) (30,40);");
      REQUIRE( ast.root.type == ast.root.LINE );
      Line* line = dynamic_cast<Line*>(ast.root.object.get());
      REQUIRE( line->color == Color::RED);
    }
}

TEST_CASE( "AST CIRCLE" ) {

    SECTION( "LINE ROOT" ) {
      Ast ast = stringToAst("draw circle 20 blue (20,30);");
      REQUIRE( ast.root.type == ast.root.CIRCLE );
      Circle* circle = dynamic_cast<Circle*>(ast.root.object.get());
      REQUIRE( circle->color == Color::BLUE);
      REQUIRE( circle->size == 20);
    }
}

TEST_CASE( "AST QUADRANGLE" ) {

    SECTION( "QUADRANGLE ROOT" ) {
      Ast ast = stringToAst("draw quadrangle 50 red (20,30);");
      REQUIRE( ast.root.type == ast.root.QUADRANGLE );
      Quadrangle* quadrangle = dynamic_cast<Quadrangle*>(ast.root.object.get());
      REQUIRE( quadrangle->color == Color::RED);
      REQUIRE( quadrangle->size == 50);
    }
}

TEST_CASE( "AST POINT" ) {

    SECTION( "POINT ROOT" ) {
      Ast ast = stringToAst("draw point green (20,30);");
      REQUIRE( ast.root.type == ast.root.POINT );
      Point* point = dynamic_cast<Point*>(ast.root.object.get());
      REQUIRE( point->color == Color::GREEN);
    }
}

TEST_CASE( "AST ASSIGN" ) {

    SECTION( "ASSIGN SIMPLE" ) {
      Ast ast = stringToAst("x = 3;");
      REQUIRE( ast.root.type == ast.root.ASSIGN );
      AssignStatement* assignStatement = dynamic_cast<AssignStatement*>(ast.root.object.get());
      REQUIRE( assignStatement->id == "x");
      Integer* integer = dynamic_cast<Integer*>(assignStatement->r_val.object.get());
      REQUIRE( integer->value == 3);
    }

    SECTION( "ASSIGN WITH ADD" ) {
      Ast ast = stringToAst("x = 3+3;");
      REQUIRE( ast.root.type == ast.root.ASSIGN );
      AssignStatement* assignStatement = dynamic_cast<AssignStatement*>(ast.root.object.get());
      REQUIRE( assignStatement->id == "x");
      AddStatement* addStatement = dynamic_cast<AddStatement*>(assignStatement->r_val.object.get());
      REQUIRE( addStatement->addOps.at(0) == AddType::ADD);
    }
}

TEST_CASE( "AST IF STATEMENT"){

}

TEST_CASE( "AST LOOP STATEMENT"){

}

TEST_CASE( "AST FUNCTION LITERAL"){

}

TEST_CASE( "AST FUNCTION APPLY"){

}
