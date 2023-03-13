// -*- C++ -*-
// $Id: Add_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Num_Command.h
 *
 * $Id: Num_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_
#include "Stack.h"
#include "Expr_Command.h"



/**
 * @class Add_Command
 *
 * Basic implementation of a standard array class for chars.
 */
class Num_Command: public Expr_Command
{
public:
  /// Default constructor.
  Num_Command(void);
  /**
  * Initializing constructor.
  *
  * */

  Num_Command(int op_num_);



  //Destructor
  ~Num_Command();

  /**
   * virtal method takes stack as input
   *
   *
   *
   * @param[in]        stack
   * @return      boolean     return status
   *
   */
    virtual bool testing (Stack <int> & stack) ;

    /**
    * method to get precedence value
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    int past(void);

private:
    int op_num_;

};

#endif // !defined _NUM_COMMAND_H_
