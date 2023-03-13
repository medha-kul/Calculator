// $Id: Parenthesis_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Parenthesis_Command

#include "Parenthesis_Command.h"


 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Parenthesis_Command::Parenthesis_Command(void)
 {

 }

 /// Destructor.
Parenthesis_Command::~Parenthesis_Command()
 {

 }



///return two operands modulus
 int Parenthesis_Command::eval(int a, int b)
{
	return -1;
}

///Assume precendence division value as one
int Parenthesis_Command::past(void)
{
	return 4;
}
