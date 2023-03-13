// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Div_Node.h"

//constructor
Div_Node::Div_Node(void)
{

}
//destructor
Div_Node::~Div_Node(void)
{

}
//evaluate method for the two integers a and b
//addition of both the integers
int Div_Node::eval (int a, int b)
{
    return a/b;
}
//method for the int value type
 int Mod_Node::get_node()
{
  return 4;
}
//check for the precendence value
int Mod_Node::past()
{
  return 1;
}

//accept method - node visitor
void Div_Node::accept (Node_Visitor &nodevisitor)
{
  nodevisitor.see_Div(*this);
}
