// -*- C++ -*-
// $Id: Div_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Div_Command.h
 *
 * $Id: Div_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BIN_COMMAND_H_
#define _BIN_COMMAND_H_
#include "Stack.h"
#include "Expr_Command.h"

/**
 * @class Expr_Command
 *
 * Basic implementation of a standard Bin_Command class
 *
 */
 class Bin_Command: public Expr_Command
 {
 public:
   /// Default constructor.
   Bin_Command (void);

   /// Destructor.
   ~Bin_Command (void);
   /**
   * Method to check the given expression
   *
   *
   *
   * @param[int]        void
   * @return      int     return preceding value
   *
   */
    virtual int eval(int a, int b) = 0  ;

    /**
    * method to get precedence value
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    virtual int past(void);

    /**
     * Locate the specified character in the array. The index of the first
     * occurrence of the character is returned. If the character is not
     * found in the array, then -1 is returned.
     *
     * @param[in]        stack
     * @return      boolean     return status
     *
     */
       bool testing (Stack <int> & stack) ;

 private:
   //////////////////////////////////////////////////////////////////////////////
  /// DEFINE ANY HELPER METHODS HERE
 };

 #endif
