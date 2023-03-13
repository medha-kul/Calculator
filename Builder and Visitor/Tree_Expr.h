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
#ifndef _TREE_EXPR_H_
#define _TREE_EXPR_H_
#include "Expr_Node.h"

class Tree_Expr
{
public:
  //constructor
  Tree_Expr(void);
  //Destructor
  virtual ~Tree_Expr (void);

  //evaluate method for the visitor
  virtual int eval(Node_Visitor &nodevisitor);
//get method
virtual Expr_Node * get_Stem();
//set Method
void set_Stem (Expr_Node * stem);

private:
  Expr_Node *stem;

};
#endif //END TREE_EXPR_H_
