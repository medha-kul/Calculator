// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Add_Node.h"

//default constructor
Add_Node::Add_Node(void)
{

}
//destructor
Add_Node::~Add_Node(void)
{

}
//evaluate method for the two integers a and b
//addition of both the integers
int Add_Node::eval (int a, int b)
{
    return a+b;
}
//check for the precendence value
int Add_Node::past()
{
  return 0;
}
//method for the int value type
 int Add_Node::get_node()
{
  return 1;
}
//accept method - node visitor
void Add_Node::accept (Node_Visitor &nodevisitor)
{
  nodevisitor.see_Add(*this);
}
