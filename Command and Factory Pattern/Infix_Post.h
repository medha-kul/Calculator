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
#ifndef _INFIX_POST_H_
#define _INFIX_POST_H_
#include "Expr_Com_Iterator.h"
#include "Expr_Command.h"
#include "Expr_Com_Factory.h"
#include <sstream>
#include <cctype>
#include <string>
#include <iostream>



class Infix_Post
{


public:
  //default constructor
  Infix_Post (void);

  /// Destructor.
  ~Infix_Post (void);

  /**
  * method converting from infix to post
  *
  *
  *
  * @param[bool]        const
  * @return      int
  *
  */
  bool infix_post (const std::string & infix,Expr_Com_Factory & factory,Array <Expr_Command *> & post);
  /**
  * method to evaluating postfix
  *
  *
  *
  * @param[boolean]
  * @return      int
  *
  */

  bool eval_fix(Expr_Com_Iterator<Expr_Command *> & iter, int & product);
  //delete postfix elemenets
  bool delete_post (Array<Expr_Command*> & post, Stack<Expr_Command*> &temp);



private:

};

#endif //!defined _INFIX_POST_H_
