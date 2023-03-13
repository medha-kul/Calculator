// -*- C++ -*-
// $Id: Sub_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _UNARY_NODE_H
#define _UNARY_NODE_H
#include "Expr_Node.h"
/**
 * @class Add_Command
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */
class Unary_Node :public Expr_Node
{
public:
  //constructor
  Unary_Node(void);
  //Destructor
  virtual ~Unary_Node(void);

  /**
    * Method to check the given expression
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    virtual int eval(void)  ;
    /* return int for node */
    virtual int get_node();
    /**
    * method to get precedence value
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    virtual int past();
    //getter for the child
    Expr_Node & get_support(void);
    //setter for the get_child
    void set_support (Expr_Node * node);

    /**
    * accept method
    */
    virtual void accept (Node_Visitor &nodevisitor);

  private:
    Expr_Node * support_;

};
#endif //Unary_Node End
