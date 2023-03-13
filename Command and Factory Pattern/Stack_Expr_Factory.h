// -*- C++ -*-
// $Id: Stack_Expr_Factory.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Stack_Expr_Factory.h
 *
 * $Id: Stack_Expr_Factory.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _STACK_EXPR_FACTORY_H_
#define _STACK_EXPR_FACTORY_H_
#include "Expr_Com_Factory.h"


class Stack_Expr_Factory: public Expr_Com_Factory
{
public:
  //Default
  Stack_Expr_Factory(void);
//Destructor
  virtual ~Stack_Expr_Factory();

//virtual method to create number command
 virtual Num_Command * create_num_command(int op_num_) = 0;
  //virtual method to create add command
   virtual Add_Command * create_add_command(void) = 0;
  //virtual method to create multi command
   virtual Multi_Command * create_multi_command (void) = 0;
  //virtual method to create mod command
   virtual Mod_Command * create_mod_command(void) = 0;
  //virtual method to create sub command
   virtual Sub_Command * create_sub_command(void)=0;
  //virtual method to create div command
   virtual Div_Command * create_div_command(void)=0;
  //virtual method to create div command
  virtual Parenthesis_Command * create_parenthesis_command(void)=0;



private:

};

#endif //!defined_ABS_EXPR_FACTORY_H
