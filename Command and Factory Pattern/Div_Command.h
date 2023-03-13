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
#ifndef _DIV_COMMAND_H_
#define _DIV_COMMAND_H_
#include "Bin_Command.h"


/**
 * @class Div_Command
 *
 * Basic implementation of a standard division command class for char with help of Bin_Command.h
 */
 class Div_Command: public Bin_Command
 {
 public:
    /// Default constructor.
    Div_Command (void);

    /// Destructor.
    ~Div_Command (void);
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
