// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Bin_Node.h"

//constructor
Bin_Node::Bin_Node(void)
{

}
//destructor
Bin_Node::~Bin_Node(void)
{

}
//getter
Expr_Node & Bin_Node::get_kmove()
{
	return *this->k_move;
}

//setter
void Bin_Node::set_kmove(Expr_Node * node)
{
  this->k_move = node;
}
//getter
Expr_Node & Bin_Node::get_nmove()
{
	return *this->n_move;
}

//setter
void Bin_Node::set_nmove(Expr_Node * node)
{
  this->n_move = node;
}

//method for evalution of the expression
int Bin_Node::eval(void)
 {
    int bside_ = this->n_move->eval();
	  int aside_ = this->k_move->eval();
	  return eval(aside_,bside_);

 }
