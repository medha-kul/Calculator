// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Sub_Node.h"

//default constructor
Sub_Node::Sub_Node(void)
{

}
//destructor
Sub_Node::~Sub_Node(void)
{

}
//evaluate method for the two integers a and b
//addition of both the integers
int Sub_Node::eval (int a, int b)
{
    return a-b;
}
//check for the precendence value
int Sub_Node::past()
{
  return 0;
}
//method for the int value type
 int Sub_Node::get_node()
{
  return 2;
}
//accept method - node visitor
void Sub_Node::accept (Node_Visitor &nodevisitor)
{
  nodevisitor.see_Sub(*this);
}
