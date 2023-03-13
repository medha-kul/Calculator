// $Id: Num_Command.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Num Command
//

#include "Num_Command.h"
/// Default constructor.
 /**
   * Initializing constructor.
   *
   * */
Num_Command::Num_Command(void)
 {

 }
 /// Initializing
Num_Command::Num_Command(int op_)
  :op_num_(op_)
 {

 }
///Destructor
Num_Command::~Num_Command()
{

}

/**
 * virtal method takes stack as input
 *
 *
 *
 * @param[bool]        stack
 * @return      boolean     return status
 *
 */
  bool Num_Command ::testing (Stack <int> & stack)
 {
	     stack.push(this->op_num_);
	      return true;
 }

 //setting the deafult value of precedence to 3
  int Num_Command ::past(void)
 {
 	    return 3;
 }
