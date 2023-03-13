// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Unary_Node.h"

//constructor
Unary_Node::Unary_Node(void)
{

}
//Destructor
Unary_Node::~Unary_Node(void)
{

}

Expr_Node & Unary_Node::get_support()
{
  return *this->support_;
}
void Unary_Expr::set_support(Expr_Node * node)
{
  this->support_ = node;
}

int Unary_Node::eval()
{
    int support_one_ = this->support_->eval();
    return eval(support_one_);
}
