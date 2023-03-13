// -*- C++ -*-
// $Id: Node_Visitor.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _EXPR_PARSER_H
#define _EXPR_PARSER_H
#include "Expr_Tree_Builder.h"
#include "Node_Factory.h"
#include "Tree_Factory.h"
#include <iostream>
#include <sstream> //string stream
#include <cctype>
#include <string>

class Expr_Parser
{
public:
  Expr_Parser(void);
  //destructor
  ~Expr_Parser(void);
//method to evaluate expression infix to input string
  bool eval_expr (std::string & infix, int &product);
  //method to parse expression
  bool parser_act(std::string & infix, Builder_Expr & m, Tree_Factory & factory);

  //class empty_exception

  class tree_exception: public std::exception
  {
  public:
    tree_exception(void)
    :std::exception()
    {
      std::cout<<"-----------------------------------"<<std::endl;
        std::cout<<"-----------------------------------"<<std::endl;
      std::cout<<"exception"<<std::endl;
        std::cout<<"-----------------------------------"<<std::endl;
        std::cout<<"-----------------------------------"<<std::endl;
    }
  };

};
#endif //_EXPR_PARSER_H
