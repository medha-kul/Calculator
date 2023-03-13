// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Tree_Expr.h"

//constructor
Tree_Expr::Tree_Expr(void)
:stem(0)
{

}
//Destructor
Tree_Expr::~Tree_Expr (void)
{

}

//getter
Expr_Node* Tree_Expr::get_Stem()
{
	return this->stem;
}
//setter
void Tree_Expr::set_Stem(Expr_Node * stem_one_)
{
	this->stem = stem_one_;
}

int Tree_Expr::eval int eval(Node_Visitor &nodevisitor)
{
  int product = 0;
  int y_three = this->get_Stem()->get_node();
  switch (y_three)
	{

	case 0:

		Node_Visitor.see_Minus(*(Minus_Node *)this->get_Stem());
	   product =Node_Visitor.get_Product();
		break;

	case 1:
      Node_Visitor.see_Sub(*(Sub_Node *)this->get_Stem());
      product =Node_Visitor.get_Product();
      break;
	case 2:
    Node_Visitor.see_Add(*(Add_Node *)this->get_Stem());
    product =Node_Visitor.get_Product();
    break;
	case 3:
    Node_Visitor.see_Div(*(Div_Node *)this->get_Stem());
    product =Node_Visitor.get_Product();
    break;
	case 4:
    Node_Visitor.see_Mul(*(Mul_Node *)this->get_Stem());
    product =Node_Visitor.get_Product();
    break;
	case 5:
    Node_Visitor.see_Mod(*(Mod_Node *)this->get_Stem());
    product =Node_Visitor.get_Product();
    break;
	case 6 :
    Node_Visitor.see_Num(*(Num_Node *)this->get_Stem());
    product =Node_Visitor.get_Product();
    break;
	default:
		break;
	}
	return product;
}
