// -*- C++ -*-
// $Id: Node_Visitor.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _NODE_VISITOR_H_
#define _NODE_VISITOR_H_
#include "Stack.h"

class Add_Node;
class Sub_Node;
class Mul_Node;
class Mod_Node;
class Num_Node;
class Minus_Node;
class Div_Node;
/**
 * @class Add_Node
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */
class Node_Visitor
{
public:
  //constructor
  Node_Visitor(void);
  //destructor
  virtual ~Node_Visitor(void);
  //method for the add_node
  virtual void see_Add (Add_Node & node) = 0;
  //method for the sub_node
  virtual void see_Sub (Sub_Node & node) = 0;
  //method for the div_node
  virtual void see_Div (Div_Node & node) = 0;
  //method for the add_node
  virtual void see_Num (Num_Node & node) = 0;
  //method for the sub_node
  virtual void see_Mul (Mul_Node & node) = 0;
  //method for Minus_Node
  virtual void see_Minus (Minus_Node & node) = 0;
  //method for the div_node
  virtual void see_Mod (Mod_Node & node) = 0;
 virtual int get_Product(void)=0;


};
#endif //END NODE_VISITOR_H
