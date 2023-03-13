// -*- C++ -*-
// $Id: Add_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _TREE_EVAL_H_
#define _TREE_EVAL_H_
#include <stdexcept>
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Mod_Node.h"
#include "Minus_Node.h"
#include "Div_Node.h"
#include "Node_Visitor.h"
#include "Bin_Node.h"

class Tree_Eval : public Node_Visitor
{
public:
  //constructor
  Tree_Eval (void);
  //destructor
  virtual ~Tree_Eval(void);
  //method to see
  //method for the add_node
  virtual void see_Add (Add_Node & node) ;
  //method for the sub_node
  virtual void see_Sub (Sub_Node & node) ;
  //method for the div_node
  virtual void see_Div (Div_Node & node) ;
  //method for the add_node
  virtual void see_Num (Num_Node & node) ;
  //method for the sub_node
  virtual void see_Mul (Mul_Node & node) ;
  //method for Minus_Node
  virtual void see_Minus (Minus_Node & node) ;
  //method for the div_node
  virtual void see_Mod (Mod_Node & node) ;

  //method for the product getters
  virtual int p_Product_(void);

private:
  Stack<int> * stack;
  int product_;




};
#endif //END _TREE_EVAL_H_
