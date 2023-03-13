// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Expr_Tree_Builder.h"
//constructor
Expr_Tree_Builder::Expr_Tree_Builder(void)
:suites_(new Stack <Expr_Node *> ()),
charger_(new Stack <Expr_Node *> ()),
sub_tree_(0)

{

}
//destructor
 Expr_Tree_Builder::~Expr_Tree_Builder(void)
 {
   delete suites_;
   delete charger_;
 }
//getter method
  Tree_Expr * Tree_Expr::get_expr(void)
  {
    while(!(this->charger_->is_empty()))
	{
		Bin_Node * u_node_;
		u_node_ = (Bin_Node*)this->charger_->top();
		this->charger_->pop();
    u_node->set_kmove(this->suites_->top());
		this->suites_->pop();
	  u_node->set_nmove(this->suites_->top());
		this->suites_->pop();
		this->suites_->push(u_node);
	}

	this->sub_tree_->set_Stem(this->suites_->top());

	 return this->sub_tree_;
  }
//method to build the expression
void Expr_Tree_Builder::builder_expr()
{
  sub_tree_= new Tree_Expr();
}
//method to get number node command
void Expr_Tree_Builder:: builder_Num (Tree_Builder &factory ,int suite)
{

	Num_Node *tree_ = factory.create_num_command(suite);
  this->suites_->push(tree_);

}
//method for minu node
void Expr_Tree_Builder:: builder_Minus (Tree_Builder &factory ,int suite)
{

	Minus_Node *tree_ = factory.create_minus_command(suite);
  this->suites_->push(tree_);

}
//method for the modulus
void Expr_Tree_Builder::builder_Mod(Tree_Builder &factory )
{
  Mod_Node *tree_ = factory.create_mod_command();
  if(charger_->is_empty()||charger->top()->past()<=tree_->past())
		this->charger_->push(tree_);

	else
	{
		while(!charger_->is_empty() && charger_->top()->past() > tree_->past())
		{
			Expr_Node * charger_a_ = charger_->top();
			if(charger_a_->get_node() != 0)
			{
				((Bin_Node *)charger_a_)->set_nmove(suites_->top());
				suites_->pop();
				((Bin_Node *)charger_a_)->set_kmove(suites_->top());
				suites_->pop();
			}
			else
			{
				((Unary_Node *)charger_a_)->set_support(suites_->top());
				suites_->pop();
			}
			suites_->push(charger_a_);
		}
		this->charger_->push(tree_);
	}
}

//method for add
void Expr_Tree_Builder::builder_Add(Tree_Builder &factory )
{
  Add_Node *tree_ = factory.create_add_command();
  if(charger_->is_empty()||charger->top()->past()<=tree_->past())
		this->charger_->push(tree_);

	else
	{
		while(!charger_->is_empty() && charger_->top()->past() > tree_->past())
		{
			Expr_Node * charger_a_ = charger_->top();
			if(charger_a_->get_node() != 0)
			{
				((Bin_Node *)charger_a_)->set_nmove(suites_->top());
				suites_->pop();
				((Bin_Node *)charger_a_)->set_kmove(suites_->top());
				suites_->pop();
			}
			else
			{
				((Unary_Node *)charger_a_)->set_support(suites_->top());
				suites_->pop();
			}
			suites_->push(charger_a_);
		}
		this->charger_->push(tree_);
	}
}
//method for multiply
void Expr_Tree_Builder::builder_Mul(Tree_Builder &factory )
{
  Mul_Node *tree_ = factory.create_mul_command();
  if(charger_->is_empty()||charger->top()->past()<=tree_->past())
		this->charger_->push(tree_);

	else
	{
		while(!charger_->is_empty() && charger_->top()->past() > tree_->past())
		{
			Expr_Node * charger_a_ = charger_->top();
			if(charger_a_->get_node() != 0)
			{
				((Bin_Node *)charger_a_)->set_nmove(suites_->top());
				suites_->pop();
				((Bin_Node *)charger_a_)->set_kmove(suites_->top());
				suites_->pop();
			}
			else
			{
				((Unary_Node *)charger_a_)->set_support(suites_->top());
				suites_->pop();
			}
			suites_->push(charger_a_);
		}
		this->charger_->push(tree_);
	}
}
//method for sub
void Expr_Tree_Builder::builder_Add(Tree_Builder &factory )
{
  Add_Node *tree_ = factory.create_add_command();
  if(charger_->is_empty()||charger->top()->past()<=tree_->past())
		this->charger_->push(tree_);

	else
	{
		while(!charger_->is_empty() && charger_->top()->past() > tree_->past())
		{
			Expr_Node * charger_a_ = charger_->top();
			if(charger_a_->get_node() != 0)
			{
				((Bin_Node *)charger_a_)->set_nmove(suites_->top());
				suites_->pop();
				((Bin_Node *)charger_a_)->set_kmove(suites_->top());
				suites_->pop();
			}
			else
			{
				((Unary_Node *)charger_a_)->set_support(suites_->top());
				suites_->pop();
			}
			suites_->push(charger_a_);
		}
		this->charger_->push(tree_);
	}
}
