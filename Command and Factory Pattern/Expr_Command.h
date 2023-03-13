// -*- C++ -*-
// $Id: Expr_Command.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Expr_Command.h
 *
 * $Id: Expr_Command.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_
#include "Stack.h"

/**
 * @class Expr_Command
 *
 * Basic implementation of a standard array class for chars.
 */
 class Expr_Command
{
public:
  /// Default constructor.
  Expr_Command (void);

  /// Destructor.
  ~Expr_Command (void);

  /**
  * virtual method to get precedence value
  *
  *
  *
  * @param[int]        void
  * @return      int     return preceding value
  *
  */
   virtual int past(void);
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

private:
  //////////////////////////////////////////////////////////////////////////////
 /// DEFINE ANY HELPER METHODS HERE

};

#endif // !defined _EXPR_COMMAND_H_
