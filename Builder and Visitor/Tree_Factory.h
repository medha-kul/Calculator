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
//#ifndef _TREE_FACTORY_H_
//#define _TREE_FACTORY_H_
#include "Node_Factory.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Mod_Node.h"
#include "Minus_Node.h"
#include "Div_Node.h"

/**
 * @class Add_Node
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */

 class Tree_Factory : public Node_Factory
 {
 public:
   //constructor
   Tree_Factory(void);
   //destructor
   virtual ~Tree_Factory(void);

   //method for the add_node
   virtual Add_Node *create_add_command(void);
   //method for the sub_node
   virtual Sub_Node *create_sub_command(void);
   //method for the div_node
   virtual Div_Node *create_div_command(void);
   //method for the add_node
   virtual Mul_Node *create_mul_command(void);
   //method for the sub_node
   virtual Mod_Node *create_mod_command(void);
   //method for Minus_Node
   virtual Num_Node *create_num_command(int suite);
   //method for the div_node
   virtual Minus_Node *create_minus_command(int suite);

 };
