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
#ifndef _NUM_NODE_H_
#define _NUM_NODE_H_
#include "Expr_Node.h"
#include "Node_Visitor.h"

/**
 * @class Num_Node
 *
 *
 */
class Num_Node :public Expr_Node
{

public:
  // Constructor
	Num_Node(int suite);
  // Destructor
	virtual ~Num_Node(void);
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

  private:
    int a_node_;

  };

  #endif //END NUM_NODE_H
