// $Id: Stack_Expr_Factory.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack_Expr_Factory Command
//

#include "Stack_Expr_Factory.h"

/// Default constructor.
/**
  * Initializing constructor.
  *
  * */
Stack_Expr_Factory ::Stack_Expr_Factory(void)
{

}
/// Destructor.
Stack_Expr_Factory::~Stack_Expr_Factory()
{

}

Num_Command * create_num_command (int op_);
Add_Command * create_add_command (void);
Div_Command * create_div_command(void);
Parenthesis_Command * create_parenthesis_command(void);
Mod_Command * create_mod_command(void);
Multi_Command * create_multi_command(void);
Sub_Command * create_sub_command(void);
