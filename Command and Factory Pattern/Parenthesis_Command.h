// -*- C++ -*-
// $Id: Parenthesis_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Parenthesis_Command.h
 *
 * $Id: Parenthesis_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _PARENTHESIS_COMMAND_H_
#define _PARENTHESIS_COMMAND_H_
#include "Bin_Command.h"


/**
 * @class Parenthesis_Command
 *
 * Basic implementation of a standard parenthesis command class for char with help of Bin_Command.h
 */
 class Parenthesis_Command: public Bin_Command
 {
 public:
    /// Default constructor.
    Parenthesis_Command (void);

    /// Destructor.
    ~Parenthesis_Command (void);
    /**
    * Method to check the given expression
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    int eval(int a, int b)  ;

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
   //////////////////////////////////////////////////////////////////////////////
  /// DEFINE ANY HELPER METHODS HERE

};


#endif   // !defined _DIV_COMMAND_H_
