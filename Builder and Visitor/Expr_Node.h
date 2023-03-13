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
#ifndef _EXPR_NODE_H
#define _EXPR_NODE_H
#include "Node_Visitor.h"
/**
 * @class Add_Node
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */
 class Expr_Node
 {

public:
  // constructor
  Expr_Node(void);
  //destructor
  virtual ~Expr_Node(void);

    /**
    * method to get precedence value
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    virtual int past() = 0;
    /**
      * Method to check the given expression
      *
      *
      *
      * @param[int]        void
      * @return      int     return preceding value
      *
      */
    virtual int eval(void) =0 ;
    /* return int for node */
    virtual int get_node()= 0;
    /**
    * accept method
    */
    virtual void accept (Node_Visitor &nodevisitor)= 0;

  private:
      int product_;
 };
 #endif //END SUB_NODE_H
