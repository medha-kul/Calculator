// -*- C++ -*-
// $Id: Div_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _BUILDER_EXPR_H
#define _BUILDER_EXPR_H
#include "Expr_Node.h"
#include "Tree_Expr.h"
#include "Tree_Factory.h"
/**
 * @class Num_Node
 *
 *
 */
 class Builder_Expr
 {
 public:
    //constructor
    Builder_Expr (void);
    //destructor
    ~Builder_Expr(void);

    //method for the build add_node
    virtual void builder_Add (Tree_Factory & factory)= 0;
    //method for the build sub_node
    virtual void builder_Sub (Tree_Factory & factory) = 0;
    //method for the build div_node
    virtual void builder_Div (Tree_Factory & factory) = 0;
    //method for the build add_node
    virtual void builder_Num (Tree_Factory & factory, int suite) = 0;
    //method for the build sub_node
    virtual void builder_Mul (Tree_Factory & factory) = 0;
    //method for build Minus_Node
    virtual void builder_Minus (Tree_Factory & factory) = 0;
    //method for the build div_node
    virtual void builder_Mod (Tree_Factory & factory) = 0;

    //create node expression
    virtual void builder_expr() = 0;

    virtual Tree_Expr * get_expr(void) = 0;

 };
