// -*- C++ -*-
// $Id: Mutli_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Multi_Command.h
 *
 * $Id: Multi_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _MULTI_COMMAND_H_
#define _MULTI_COMMAND_H_
#include "Bin_Command.h"


/**
 * @class Multi_Command
 *
 * Basic implementation of a standard multiplication command class for char with help of Bin_Command.h
 */
 class Multi_Command: public Bin_Command
 {
 public:
    /// Default constructor.
    Multi_Command (void);

    /// Destructor.
    ~Multi_Command (void);
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


#endif   // !defined _MULTI_COMMAND_H_
