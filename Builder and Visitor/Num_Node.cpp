// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Num_Node.h"
//constructor
Num_Node::Num_Node (int suite)
:a_node(suite)
{

}
//destructor
Num_Node::~Num_Node (void)
{

}
//method for the node type
int Num_Node::get_node()
{
  return 6;
}

//method for the precendence value
int Minus_Node::past()
{
  return -1;
}

//method for evaluating the value for the minus node
int Minus_Node::eval (void)
{
  return this->a_node_;
}

//accept method - node visitor
void Num_Node::accept (Node_Visitor &nodevisitor)
{
      nodevisitor.see_Num(*this);
}
