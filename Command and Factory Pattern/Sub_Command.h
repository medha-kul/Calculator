// -*- C++ -*-
// $Id: Sub_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Add_Command.h
 *
 * $Id: Sub_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_
#include "Bin_Command.h"


/**
 * @class Sub_Command
 *
 * Basic implementation of a standard subtraction command class for char with help of Bin_Command.h
 */
 class Sub_Command: public Bin_Command
 {
 public:
    /// Default constructor.
    Sub_Command (void);

    /// Destructor.
    ~Sub_Command (void);
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


#endif   // !defined _SUB_COMMAND_H_
