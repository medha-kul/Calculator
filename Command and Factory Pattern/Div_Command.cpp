// $Id: Div_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Div Command
//
#include "Div_Command.h"


 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Div_Command::Div_Command(void)
 {

 }

 /// Destructor.
Div_Command::~Div_Command()
 {

 }



///return two operands modulus
 int Div_Command::eval(int a, int b)
{
	return (a/b);
}

///Assume precendence division value as one
int Div_Command::past(void)
{
	return 1;
}
