#include "evaluator/evaluator.hpp"
#include "ast/Node.hpp"
#include "ast/assign_statement.h"
#include "ast/if_statement.hpp"
#include "ast/loop_statement.hpp"
#include "ast/atom/FunctionLiteral.hpp"
#include "ast/atom/FunctionApply.hpp"
#include "ast/atom/Identifier.hpp"
#include "ast/atom/Integer.hpp"
#include "ast/circle.hpp"
#include "ast/line.hpp"
#include "ast/quadrangle.hpp"
#include "ast/point.hpp"
#include "ast/color.hpp"
#include "ast/add_statement.h"
#include "ast/mul_statement.h"
#include "ast/eq_statement.hpp"
#include "ast/or_statement.hpp"
#include "ast/and_statement.h"
#include "ast/rel_statement.hpp"
#include "ast/ast.hpp"
#include "botvinaruntimeexception.hpp"
#include "figure/circlefigure.hpp"
#include "figure/quadranglefigure.hpp"
#include "figure/pointfigure.hpp"
#include "figure/linefigure.hpp"
#include <QCoreApplication>

using namespace ast;

Object Evaluator::eval(const Ast& tree) {

  EvalStack stack; stack.emplace(tree.root);
  ValueStack vstack;

  while(!stack.empty()) {
    AstEvalBox& box = stack.top();

    if(box.evaluateNow) {
      switch(box.type) {
      case NodeObject::ASSIGN:
        evaluateAssign(stack, vstack);
        stack.pop();
        break;

      case NodeObject::OR:
        evaluateOr(stack, vstack);
        stack.pop();
        break;

      case NodeObject::AND:
        evaluateAnd(stack, vstack);
        stack.pop();
        break;

      case NodeObject::EQ:
        evaluateEq(stack, vstack);
        stack.pop();
        break;

      case NodeObject::REL:
        evaluateRel(stack, vstack);
        stack.pop();
        break;

      case NodeObject::ADD:
        evaluateAdd(stack, vstack);
        stack.pop();
        break;

      case NodeObject::MUL:
        evaluateMul(stack, vstack);
        stack.pop();
        break;

      case NodeObject::CIRCLE:
        evaluateCircle(stack, vstack);
        stack.pop();
        break;

      case NodeObject::QUADRANGLE:
        evaluateQuadrangle(stack, vstack);
        stack.pop();
        break;

      case NodeObject::LINE:
        evaluateLine(stack, vstack);
        stack.pop();
        break;

      case NodeObject::POINT:
        evaluatePoint(stack, vstack);
        stack.pop();
        break;

      case NodeObject::FUNCTION_APPLY:
        evaluateFunctionApply(stack,vstack);
        stack.pop();
        break;

      case NodeObject::IF_STATEMENT:
        evaluateIfStatement(stack,vstack);
        break;

      case NodeObject::LOOP_STATEMENT:
        evaluateLoopStatement(stack,vstack);
        break;

      default:
        break;
      }

    }
    else {
      switch(box.type) {
      case NodeObject::ASSIGN:
        {
          AssignStatement* ptr = dynamic_cast<AssignStatement*>(box.node);

          stack.emplace(ptr->r_val);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::OR:
        {
          OrStatement* ptr = dynamic_cast<OrStatement*>(box.node);

          for(auto& nobj : ptr->operands)
            stack.emplace(nobj);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::AND:
        {
          AndStatement* ptr = dynamic_cast<AndStatement*>(box.node);

          for(auto& nobj : ptr->operands)
            stack.emplace(nobj);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::EQ:
        {
          EqStatement* ptr = dynamic_cast<EqStatement*>(box.node);

          stack.emplace(ptr->left);
          stack.emplace(ptr->right);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::REL:
        {
          RelStatement* ptr = dynamic_cast<RelStatement*>(box.node);

          stack.emplace(ptr->left);
          stack.emplace(ptr->right);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::ADD:
        {
          AddStatement* ptr = dynamic_cast<AddStatement*>(box.node);

          for(auto& nobj : ptr->operands)
            stack.emplace(nobj);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::MUL:
        {
          MulStatement* ptr = dynamic_cast<MulStatement*>(box.node);

          for(auto& nobj : ptr->operands)
            stack.emplace(nobj);

          box.evaluateNow = true;
        }
        break;

      case NodeObject::ID:
        evaluateId(stack, vstack);
        stack.pop();
        break;

      case NodeObject::INT:
        {
          Integer* ptr = dynamic_cast<Integer*>(box.node);

          vstack.emplace(new Object(ptr->value));
          stack.pop();
        }
        break;

      case NodeObject::IF_STATEMENT:
       {
          IfStatement* ptr = dynamic_cast<IfStatement*>(box.node);
          stack.emplace(ptr->condition);
          box.evaluateNow=true;
      }
      break;//TODO ZROBIĆ

        case NodeObject::LOOP_STATEMENT:
        {
            LoopStatement* ptr = dynamic_cast<LoopStatement*>(box.node);
            stack.emplace(ptr->condition);
            box.evaluateNow=true;
        }
          break;//TODO ZROBIĆ


         case NodeObject::CIRCLE:
        {
            Circle* ptr = dynamic_cast<Circle*>(box.node);
            stack.emplace(ptr->x);
            stack.emplace(ptr->y);
            box.evaluateNow = true;
        }
          break;//TODO ZROBIĆ

         case NodeObject::QUADRANGLE:
        {
            Quadrangle* ptr = dynamic_cast<Quadrangle*>(box.node);
            stack.emplace(ptr->x);
            stack.emplace(ptr->y);
            box.evaluateNow = true;
        }
          break;//TODO ZROBIĆ

        case NodeObject::LINE:
        {
            Line* ptr = dynamic_cast<Line*>(box.node);
            stack.emplace(ptr->origin_x);
            stack.emplace(ptr->origin_y);
            stack.emplace(ptr->end_x);
            stack.emplace(ptr->end_y);

            box.evaluateNow = true;
        }
          break;//TODO ZROBIĆ

        case NodeObject::POINT:
        {
            Point* ptr = dynamic_cast<Point*>(box.node);
            stack.emplace(ptr->x);
            stack.emplace(ptr->y);
            box.evaluateNow = true;
        }
          break; //TODO ZROBIĆ

        case NodeObject::EXIT:
        {
            exit(0);
        }
        break;

        case NodeObject::CLEAR:
        {
          const AstEvalBox& box = stack.top(); stack.pop();
            drawWindow->getDrawVector().clear();
            drawWindow->update();
            std::cout <<"CLEARED"<<std::endl;
            vstack.emplace(new Object());
        } break;//TODO ZROBIĆ


      case NodeObject::FUNCTION_APPLY:
        {
          FunctionApply* ptr = dynamic_cast<FunctionApply*>(box.node);

          for(auto& nobj : ptr->exprs)
            stack.emplace(nobj);

          box.evaluateNow = true;
        }
        break;

      default:
        break;
      }
    }
  }

  return *(vstack.top());
}

void Evaluator::evaluateAssign(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  AssignStatement* assignptr = dynamic_cast<AssignStatement*>(box.node);

  const MemoryArena::Variable& rval = vstack.top();

  const std::string& vname = assignptr->id;

  if(arena_.isDefined(vname)) {
    arena_.at(vname) = rval;
  }
  else {
    arena_.put(vname, rval);
  }
}

void Evaluator::evaluateOr(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  OrStatement* orptr = dynamic_cast<OrStatement*>(box.node);

  bool result = false;
  const size_t noperands = orptr->operands.size();
  size_t i = 0;

  for(; i<noperands; ++i) {
    const MemoryArena::Variable& var = vstack.top();

    if(var->vtype != VarType::INT) {
      throw BotvinaRuntimeException("Logical or operand must be a INT");
    }

    result = result || var->i;
    vstack.pop();

    if(result)
      break;
  }

  while(++i < noperands)
    vstack.pop();

  vstack.emplace(new Object(result));
}

void Evaluator::evaluateAnd(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  AndStatement* andptr = dynamic_cast<AndStatement*>(box.node);

  bool result = true;
  const size_t noperands = andptr->operands.size();
  size_t i = 0;

  for(; i<noperands; ++i) {
    const MemoryArena::Variable& var = vstack.top();

    if(var->vtype != VarType::INT) {
      throw BotvinaRuntimeException("Logical and operand must be a INT");
    }

    result = result && var->i;
    vstack.pop();

    if(!result)
      break;
  }

  while(++i < noperands)
    vstack.pop();

  vstack.emplace(new Object(result));
}

void Evaluator::evaluateRel(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  RelStatement* relptr = dynamic_cast<RelStatement*>(box.node);

  MemoryArena::Variable leftv = vstack.top(); vstack.pop();
  const MemoryArena::Variable& rightv = vstack.top();

  if(leftv->vtype != VarType::INT || rightv->vtype != VarType::INT) {
    throw BotvinaRuntimeException("Relation operand must be an Integer");
  }

  bool result;

  switch(relptr->type) {
  case RelStatement::LT:
    result = leftv->i < rightv->i;
    break;

  case RelStatement::LE:
    result = leftv->i <= rightv->i;
    break;

  case RelStatement::GT:
    result = leftv->i > rightv->i;
    break;

  case RelStatement::GE:
    result = leftv->i >= rightv->i;
    break;
  }

  vstack.pop();

  vstack.emplace(new Object(result));
}

void Evaluator::evaluateAdd(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  AddStatement* addptr = dynamic_cast<AddStatement*>(box.node);

  int result = 0;

  for(auto op : addptr->addOps) {
    const MemoryArena::Variable& var = vstack.top();

    if(var->vtype != VarType::INT) {
        throw BotvinaRuntimeException("");
    }

    switch(op) {
    case AddType::ADD:
      result += var->i;
      break;

    case AddType::SUB:
      result -= var->i;
      break;
    }

    vstack.pop();
  }

  vstack.emplace(new Object(result));
}

void Evaluator::evaluateMul(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  MulStatement* mulptr = dynamic_cast<MulStatement*>(box.node);

  int result = 1;

  for(auto op : mulptr->mulOps) {
    const MemoryArena::Variable& var = vstack.top();

    if(var->vtype != VarType::INT)
      throw BotvinaRuntimeException("Multiplication operand must be an Integer");

    switch(op) {
    case MulType::MUL:
      result *= var->i;
      break;

    case MulType::DIV:
      result /= var->i;
      break;
    }

    vstack.pop();
  }

  vstack.emplace(new Object(result));
}

void Evaluator::evaluateId(const EvalStack& stack, ValueStack& vstack) {
  const AstEvalBox& box = stack.top();

  Identifier* idptr = dynamic_cast<Identifier*>(box.node);
  const std::string& vname = idptr->str;

  if(arena_.isDefined(vname)) {
    vstack.push(arena_.at(vname));
  }
  else {
    std::string msg("Variable identifier \"");
    msg += vname;
    msg += "\" is not defined in current scope";

    throw BotvinaRuntimeException(msg);
  }
}

void Evaluator::evaluateEq(const EvalStack &stack, ValueStack &vstack){
    const AstEvalBox& box = stack.top();

    EqStatement* relptr = dynamic_cast<EqStatement*>(box.node);

    MemoryArena::Variable leftv = vstack.top(); vstack.pop();
    const MemoryArena::Variable& rightv = vstack.top();

    if(leftv->vtype != VarType::INT || rightv->vtype != VarType::INT) {
      throw BotvinaRuntimeException("Equal operand must be an Integer");
    }

    int result;

    switch(relptr->type) {
    case EqStatement::EQ:
      result = leftv->i == rightv->i;
      break;

    case EqStatement::NEQ:
      result = leftv->i != rightv->i;
      break;
    }

    vstack.pop();

    vstack.emplace(new Object(result));
}

Qt::GlobalColor colorToGlobalColor(Color color){
    if(color==Color::RED)
        return Qt::red;
    else if(color==Color::GREEN)
        return Qt::green;
    else if(color==Color::BLUE)
        return Qt::blue;
    else if(color==Color::BLACK)
        return Qt::black;
}

void Evaluator::evaluateCircle(const EvalStack &stack, ValueStack &vstack) {

    const AstEvalBox& box = stack.top();

    Circle* relptr = dynamic_cast<Circle*>(box.node);

    MemoryArena::Variable x = vstack.top(); vstack.pop();
    MemoryArena::Variable y = vstack.top(); vstack.pop();

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }


    drawWindow->getDrawVector().emplace_back(new CircleFigure(x->i,y->i,relptr->size, colorToGlobalColor(relptr->color)));
    drawWindow->update();
    vstack.emplace(new Object());
}

void Evaluator::evaluateQuadrangle(const EvalStack &stack, ValueStack &vstack) {
    const AstEvalBox& box = stack.top();

    Quadrangle* relptr = dynamic_cast<Quadrangle*>(box.node);

    MemoryArena::Variable x = vstack.top(); vstack.pop();
    MemoryArena::Variable y = vstack.top(); vstack.pop();

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }


    drawWindow->getDrawVector().emplace_back(new QuadrangleFigure(x->i,y->i,relptr->size, colorToGlobalColor(relptr->color)));
    drawWindow->update();
    vstack.emplace(new Object());
}

void Evaluator::evaluateLine(const EvalStack &stack, ValueStack &vstack) {
    const AstEvalBox& box = stack.top();

    Line* relptr = dynamic_cast<Line*>(box.node);

    MemoryArena::Variable o_x = vstack.top(); vstack.pop();
    MemoryArena::Variable o_y = vstack.top(); vstack.pop();
    MemoryArena::Variable e_x = vstack.top(); vstack.pop();
    MemoryArena::Variable e_y = vstack.top(); vstack.pop();

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }


    drawWindow->getDrawVector().emplace_back(new LineFigure(o_x->i,o_y->i, e_x->i,e_y->i, colorToGlobalColor(relptr->color)));
    drawWindow->update();
    vstack.emplace(new Object());
}

void Evaluator::evaluatePoint(const EvalStack &stack, ValueStack &vstack) {
    const AstEvalBox& box = stack.top();

    Point* relptr = dynamic_cast<Point*>(box.node);

    MemoryArena::Variable x = vstack.top(); vstack.pop();
    MemoryArena::Variable y = vstack.top(); vstack.pop();

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }

//    if(x->type != VarType::INT || x->type != VarType::INT) {
//      throw BotvinaRuntimeException("x operand must be an Integer");
//    }


    drawWindow->getDrawVector().emplace_back(new PointFigure(x->i,y->i, colorToGlobalColor(relptr->color)));
    drawWindow->update();
    vstack.emplace(new Object());
}

void Evaluator::evaluateFunctionApply(const EvalStack &stack, ValueStack &vstack) {
    //TODO
}

void Evaluator::evaluateIfStatement(EvalStack &stack, ValueStack &vstack) {
    AstEvalBox& box = stack.top();

    IfStatement* ifptr = dynamic_cast<IfStatement*>(box.node);

    if(!box.blockEvaluated) {
        MemoryArena::Variable condition = vstack.top(); vstack.pop();
        if(condition->i){
            std::for_each(ifptr->ops.rbegin(), ifptr->ops.rend(),
            [&stack](const NodeObject& nobj){ stack.emplace(nobj);});
            box.blockEvaluated = true;
        }
        else {
            stack.pop();
            vstack.emplace(new Object());
        }
    } else {
        int size = ifptr->ops.size();
        for(int i =0 ; i <size ; ++i){
            vstack.pop();
        }
        stack.pop();
       vstack.emplace(new Object());
    }
}

void Evaluator::evaluateLoopStatement(EvalStack &stack, ValueStack &vstack) {
    AstEvalBox& box = stack.top();

    LoopStatement* ifptr = dynamic_cast<LoopStatement*>(box.node);

    if(!box.blockEvaluated) {
        MemoryArena::Variable condition = vstack.top(); vstack.pop();
        if(condition->i){
            std::for_each(ifptr->ops.rbegin(), ifptr->ops.rend(),
            [&stack](const NodeObject& nobj){ stack.emplace(nobj);});
            box.blockEvaluated = true;
        }
        else {
            stack.pop();
            vstack.emplace(new Object());
        }
    } else {
        int size = ifptr->ops.size();
        for(int i =0 ; i <size ; ++i){
            vstack.pop();
        }
        box.blockEvaluated = false;
        stack.emplace(ifptr->condition);
    }
}



Evaluator::Evaluator(DrawWindow* drawWindow): drawWindow(drawWindow) {
}

