// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Mul_Node.h"

//constructor
//default constructor
Mul_Node::Mul_Node(void)
{

}
//destructor
Mul_Node::~Mul_Node(void)
{

}
//evaluate method for the two integers a and b
//addition of both the integers
int Mul_Node::eval (int a, int b)
{
    return a*b;
}
//method for the int value type
 int Add_Node::get_node()
{
  return 3;
}
//check for the precendence value
int Mul_Node::past()
{
  return 1;
}

//accept method - node visitor
void Mul_Node::accept (Node_Visitor &nodevisitor)
{
  nodevisitor.see_Mul(*this);
}
