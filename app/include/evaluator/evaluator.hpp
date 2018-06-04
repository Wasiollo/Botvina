#ifndef EVALUATOR_HPP
#define EVALUATOR_HPP
#include "ast/ast_header.hpp"
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
