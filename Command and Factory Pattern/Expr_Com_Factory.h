// -*- C++ -*-
// $Id: Abs_Expr_Factory.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Abs_Expr_Factory.h
 *
 * $Id: Abs_Expr_Factory.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef EXPR_COM_FACTORY_H_
#define EXPR_COM_FACTORY_H_

#include "Abs_Expr_Factory.h"

/**
 * @class Expr_Command_Factory
 *
 * Basic implementation of a standard Expr_Command_Factory class .
 */
class Expr_Com_Factory:public Abs_Expr_Factory
{
public:
    //Default
    Expr_Com_Factory(void);
  //Destructor
    virtual ~Expr_Com_Factory();

	//virtual method to create number command
	 virtual Num_Command *create_num_command(int op_num_);
  	//virtual method to create add command
	   virtual Add_Command *create_add_command(void);
  	//virtual method to create multi command
	   virtual Multi_Command *create_multi_command (void);
  	//virtual method to create mod command
	   virtual Mod_Command *create_mod_command(void);
  	//virtual method to create sub command
	   virtual Sub_Command *create_sub_command(void);
  	//virtual method to create div command
	   virtual Div_Command *create_div_command(void);
    //virtual method to create div command
    virtual Parenthesis_Command *create_parenthesis_command(void);



private:

  Expr_Com_Factory (const Expr_Com_Factory &);
  const Expr_Com_Factory &operator = (const Expr_Com_Factory);
};

#endif //!defined_EXPR_COM_FACTORY_H
