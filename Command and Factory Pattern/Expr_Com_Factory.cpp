// $Id: Expr_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Expr_Com_Factory
#include <stdlib.h>
#include "Expr_Com_Factory.h"


/// Default constructor.
/**
  * Initializing constructor.
  *
  * */
Expr_Com_Factory ::Expr_Com_Factory(void)
{

}
/// Destructor.
Expr_Com_Factory::~Expr_Com_Factory()
{

}

//returns new number command
Num_Command * Expr_Com_Factory::create_num_command (int op_num_)
{

	return new Num_Command(op_num_);
}
//returns new addition command
Add_Command * Expr_Com_Factory::create_add_command (void)
{
	return new Add_Command();
}
//returns new multiplication command
Multi_Command * Expr_Com_Factory::create_multi_command()
{
	return new Multi_Command();
}
//returns new subtraction command
Sub_Command * Expr_Com_Factory::create_sub_command()
{
	return new Sub_Command();
}
//returns new division command
Div_Command * Expr_Com_Factory::create_div_command()
{
	return new Div_Command();
}
//returns new modulus command
Mod_Command * Expr_Com_Factory::create_mod_command()
{
	return new Mod_Command();
}
//returns new parenthesis command
Parenthesis_Command * Expr_Com_Factory::create_parenthesis_command()
{
	return new Parenthesis_Command();
}
