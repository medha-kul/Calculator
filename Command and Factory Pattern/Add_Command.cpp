// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Add_Command.h"


 /// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Add_Command::Add_Command(void)
 {

 }
 /// Destructor.
Add_Command::~Add_Command()
 {

 }


 ///return two operands addition
 int Add_Command::eval(int a, int b)
{
	return (a+b);
}

/// precedence addition value as zero
int Add_Command::past(void)
{
	return 0;
}
