// $Id: Sub_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Sub Command
//
#include "Sub_Command.h"


 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Sub_Command::Sub_Command(void)
 {

 }

 /// Destructor.
Sub_Command::~Sub_Command()
 {

 }



///return two operands modulus
 int Sub_Command::eval(int a, int b)
{
	return (a-b);
}

///Assume precendence subtraction value as zero
int Sub_Command::past(void)
{
	return 0;
}
