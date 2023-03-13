// $Id: Bin_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Bin Command
//
#include "Bin_Command.h"

/// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Bin_Command::Bin_Command(void)
 {

 }
 /// Destructor.
Bin_Command::~Bin_Command()
 {

 }

 /* evaluation of the operands */
int Bin_Command::eval(int a, int b)
{
    return 0;
}

//return default value for the precendence
int Bin_Command::past(void)
{
	return -1;
}

/* Following is an abstract method - assign
 first element of head, delete the element,
  next one goes through the same process. */

  bool Bin_Command::testing (Stack <int> & stack)
{
  int op_num_one_ = stack.top();
  stack.pop();
  int op_num_two_=stack.top();
  stack.pop();
  int product = this->eval(op_num_one_,op_num_two_);
  stack.push(product);


  return true;
}
