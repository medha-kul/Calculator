// -*- C++ -*-
// $Id: Mod_Command.h 819 2011-01-17 15:24:45Z hillj $

//==============================================================================
/**
 * @file       Mod_Command.h
 *
 * $Id: Add_Command.h 819 2011-01-17 15:24:45Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_
#include "Bin_Command.h"


/**
 * @class Mod_Command
 *
 * Basic implementation of a standard mod command class for char with help of Bin_Command.h
 */
 class Mod_Command: public Bin_Command
 {
 public:
    /// Default constructor.
    Mod_Command (void);

    /// Destructor.
    ~Mod_Command (void);
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


#endif   // !defined _MOD_COMMAND_H_
