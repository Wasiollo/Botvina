#ifndef EVALUATOR_HPP
#define EVALUATOR_HPP
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
#include <stack>
#include "memoryarena.hpp"
#include "drawwindow.hpp"


struct AstEvalBox {
  using FuncPtr = std::shared_ptr<ast::Node>*;

  ast::NodeObject::Type type;
  ast::Node* node;
  const std::shared_ptr<ast::Node>* funcptr;
  bool evaluateNow;
  bool blockEvaluated;

  AstEvalBox(const ast::NodeObject& nobject)
    : type(nobject.type),
      node(nobject.object.get()),
      funcptr(nullptr),
      evaluateNow(false), blockEvaluated(false) {
  }
};

class Evaluator {
public:
  using EvalStack = std::stack<AstEvalBox>;
  using ValueStack = std::stack<MemoryArena::Variable>;

public:
  Object eval(const ast::Ast& tree);
  Evaluator(DrawWindow* drawWindow);


private:
  void evaluateAssign(const EvalStack& stack, ValueStack& vstack);
  void evaluateOr(const EvalStack& stack, ValueStack& vstack);
  void evaluateAnd(const EvalStack& stack, ValueStack& vstack);
  void evaluateNot(const EvalStack& stack, ValueStack& vstack);
  void evaluateEq(const EvalStack& stack, ValueStack& vstack);
  void evaluateRel(const EvalStack& stack, ValueStack& vstack);
  void evaluateAdd(const EvalStack& stack, ValueStack& vstack);
  void evaluateMul(const EvalStack& stack, ValueStack& vstack);
  void evaluateId(const EvalStack& stack, ValueStack& vstack);
  void evaluateCircle(const EvalStack& stack, ValueStack& vstack);
  void evaluateQuadrangle(const EvalStack& stack, ValueStack& vstack);
  void evaluateLine(const EvalStack& stack, ValueStack& vstack);
  void evaluatePoint(const EvalStack& stack, ValueStack& vstack);
  void evaluateFunctionApply(const EvalStack& stack, ValueStack& vstack);
  void evaluateIfStatement(EvalStack& stack, ValueStack& vstack);
  void evaluateLoopStatement(EvalStack& stack, ValueStack& vstack);
private:
  MemoryArena arena_;
  DrawWindow* drawWindow;

};
#endif // EVALUATOR_HPP
