// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Tree_Eval.h"

//constructor
Tree_Eval::Tree_Eval (void)
  :stack(new Stack<int>())
{

}
//destructor
Tree_Eval::~Tree_Eval(void)
{
  delete stack;
}

//method to evaluate value
int Tree_Eval::p_Product()
{
  return this->product_;
}
//method for minus node stack  purpose
void Tree_Eval::see_Minus(Minus_Node &node)
{
  int suite = node.eval();
  this->stack->push(suite);
  this->product_ = this->stack->top();
  delete &node;

}

//method for num node stack purpose
void Tree_Eval::see_Num( Numb_Node & node)
{
  int suite = node.eval();
  this->stack->push(suite);
  this->product_ = this->stack->top();
  delete &node;

}
 //method for add node stack purpose
 void Tree_Eval::see_Add (Add_Node &node)
{
    int top_ = this->stack-> top();
    this->stack->pop();
    int top_one_ = this->stack-> top();
    this->stack->pop();
    this->stack->push(top_one_+top_);
    this->product_=this->stack->top();
    node.get_nmove().accept(*this);
    node.get_kmove().accept(*this);
    delete &node;
}
//method for sub node stack
void Tree_Eval::see_Sub (Sub_Node &node)
{
   int top_ = this->stack-> top();
   this->stack->pop();
   int top_one_ = this->stack-> top();
   this->stack->pop();
   this->stack->push(top_one_-top_);
   this->product_=this->stack->top();
   node.get_nmove().accept(*this);
   node.get_kmove().accept(*this);
   delete &node;
}

//method for multi node stack
void Tree_Eval::see_Mul (Mul_Node &node)
{
   int top_ = this->stack-> top();
   this->stack->pop();
   int top_one_ = this->stack-> top();
   this->stack->pop();
   this->stack->push(top_one_*top_);
   this->product_=this->stack->top();
   node.get_nmove().accept(*this);
   node.get_kmove().accept(*this);
   delete &node;
}

//method for division node stack
void Tree_Eval::see_Div (Div_Node &node)
{
   int top_ = this->stack-> top();
   this->stack->pop();
   int top_one_ = this->stack-> top();
   this->stack->pop();
   this->stack->push(top_one_/top_);
   this->product_=this->stack->top();
   node.get_nmove().accept(*this);
   node.get_kmove().accept(*this);
   delete &node;
}
//method for modulus node stack
void Tree_Eval::see_Mod (Mod_Node &node)
{
   int top_ = this->stack-> top();
   this->stack->pop();
   int top_one_ = this->stack-> top();
   this->stack->pop();
   this->stack->push(top_one_%top_);
   this->product_=this->stack->top();
   node.get_nmove().accept(*this);
   node.get_kmove().accept(*this);
   delete &node;
}
