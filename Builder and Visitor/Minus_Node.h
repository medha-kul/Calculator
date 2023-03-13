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
#ifndef _MINUS_NODE_H_
#define _MINUS_NODE_H_
#include "Unary_Node.h"
/**
 * @class Add_Command
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */
class Minus_Node : public Unary_Node
{
public:
  //constructor
  Minus_Node (int suite);
  //destructor
  virtual ~Minus_Node (void);

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

    /**
    * accept method
    */
    virtual void accept (Node_Visitor &nodevisitor);

    virtual int eval (int a);

  private:
    int a_node;
    Expr_Node * support_;
};
#endif //MINUS_NODE
