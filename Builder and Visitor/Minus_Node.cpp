// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Minus_Node.h"
//constructor
Minus_Node::Minus_Node (int suite)
:a_node(suite)
{

}
//destructor
Minus_Node::~Minus_Node (void)
{

}
//method for the node type
int Minus_Node::get_node()
{
  return 0;
}

//method for the precendence value
int Minus_Node::past()
{
  return -2;
}
//evaluate method for the minus node
int Minus_Node::eval()
{
  int support_one_ = this->support_-> eval();
  return eval(-1 * support_one_);
}

//method for evaluating the value for the minus node
int Minus_Node::eval (int suite)
{
  return suite * -1;
}

//accept method - node visitor
void Minus_Node::accept (Node_Visitor &nodevisitor)
{
      nodevisitor.see_Minus(*this);
}
