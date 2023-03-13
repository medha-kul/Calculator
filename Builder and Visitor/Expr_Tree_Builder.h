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
#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_
#include "Node_Factory.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Mod_Node.h"
#include "Bin_Node.h"
#include "Minus_Node.h"
#include "Div_Node.h"
#include "Builder_Expr.h"

class Expr_Tree_Builder : public Builder_Expr
{
public:
  //constructor
  Expr_Tree_Builder(void);
  //Destructor
  virtual ~Expr_Tree_Builder(void);
  //method for the build add_node
  virtual void builder_Add (Tree_Factory & factory);
  //method for the build sub_node
  virtual void builder_Sub (Tree_Factory & factory);
  //method for the build div_node
  virtual void builder_Div (Tree_Factory & factory);
  //method for the build add_node
  virtual void builder_Num (Tree_Factory & factory, int suite);
  //method for the build sub_node
  virtual void builder_Mul (Tree_Factory & factory);
  //method for build Minus_Node
  virtual void builder_Minus (Tree_Factory & factory);
  //method for the build div_node
  virtual void builder_Mod (Tree_Factory & factory);

  //create node expression
  virtual void builder_expr();

  Tree_Expr * get_expr(void);

private:
  Stack<Expr_Node*> *suites_;
  Stack<Expr_Node*> *charger_;
  Tree_Expr * sub_tree_;
};
#endif //END _TREE_BUILDER_H_
