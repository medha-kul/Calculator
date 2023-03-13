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
#ifndef _NODE_FACTORY_H_
#define _NODE_FACTORY_H_
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Mod_Node.h"
#include "Minus_Node.h"
#include "Div_Node.h"

class Node_Factory
{
public:
  //constructor
  Node_Factory(void);
  //destructor
  virtual ~Node_Factory(void);
  //virtual method to create number command
	 virtual Num_Node *create_num_command(int suite) = 0;
  	//virtual method to create add command
	   virtual Add_Node *create_add_command(void) = 0;
  	//virtual method to create multi command
	   virtual Mul_Node *create_multi_command (void) = 0;
  	//virtual method to create mod command
	   virtual Mod_Node *create_mod_command(void) = 0;
  	//virtual method to create sub command
	   virtual Sub_Node *create_sub_command(void)=0;
  	//virtual method to create div command
	   virtual Div_Node *create_div_command(void)=0;
    //virtual method to create div command
    virtual Minus_Node *create_minus_command(int suite)=0;

};
#endif //END _NODE_FACTORY_H
