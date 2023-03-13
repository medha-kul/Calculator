// $Id: Mod_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Mod Command
//
#include "Mod_Command.h"


 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Mod_Command::Mod_Command(void)
 {

 }
 /// Destructor.
Mod_Command::~Mod_Command()
 {

 }


 ///return two operands modulus
 int Mod_Command::eval(int a, int b)
{
	return (a%b);
}

///Assume precendence modulus value as 2
int Mod_Command::past(void)
{
	return 2;
}
