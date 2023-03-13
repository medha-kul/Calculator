// -*- C++ -*-
// $Id: Bin_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _BIN_NODE_H_
#define _BIN_NODE_H_
#include "Expr_Node.h"
class Node_Visitor;
class Bin_Node : public Expr_Node
{
public:
  // constructor
  Bin_Node(void);
  //destructor
  virtual ~Bin_Node(void);

  //evaluate method
  virtual int eval (void);

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
    virtual int eval(int a, int b) =0 ;
    //accessing the operands and getters and setter

    Expr_Node & get_kmove(void);
    //setter
    void set_kmove (Expr_Node * node);
    //getter
    Expr_Node & get_nmove(void);
    //setter
    void set_nmove(Expr_Node * node);
    /* return int for node */
    virtual int get_node() = 0;
    /**
    * accept method
    */
    virtual void accept (Node_Visitor &nodevisitor) = 0;

  private:
    Expr_Node * k_move;
    Expr_Node * n_move;
 };
 #endif //END SUB_NODE_H
