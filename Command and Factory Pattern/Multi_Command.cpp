// $Id: Multi_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Multi Command
//
#include "Multi_Command.h"
 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Multi_Command::Multi_Command(void)
 {

 }
 /// Destructor.
Multi_Command::~Multi_Command()
 {

 }
 ///return two operands multiplication
 int Multi_Command::eval(int a, int b)
{
	return (a*b);
}

///Assume precendence multiplication value as one
int Multi_Command::past(void)
{
	return 1;
}
