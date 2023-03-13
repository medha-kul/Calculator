// $Id: Expr_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Expr Command
#include "Expr_Command.h"

/// Default constructor.
/**
  * Initializing constructor.
  *
  * */
Expr_Command::Expr_Command(void)
{

}
/// Destructor.
Expr_Command::~Expr_Command()
{

}

//return default value for the precendence
int Expr_Command::past(void)
{
	return -1;
}

//expression executing method
  bool Expr_Command::testing (Stack <int> & stack)
{

        return true;
}
