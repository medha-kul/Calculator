// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Tree_Factory.h"



//constructor
Tree_Factory::Tree_Factory(void)
{

}
//destructor
Tree_Factory::~Tree_Factory(void)
{

}
//method for the add_node
Add_Node Tree_Factory::create_add_command()
{
  return new Add_Node();
}
//method for the add_node
Div_Node Tree_Factory::create_div_command()
{
  return new Div_Node();
}
//method for the add_node
Sub_Node Tree_Factory::create_sub_command()
{
  return new Sub_Node();
}
//method for the add_node
Mul_Node Tree_Factory::create_mul_command()
{
  return new Mul_Node();
}
//method for the add_node
Mod_Node Tree_Factory::create_mod_command()
{
  return new Mod_Node();
}

//method for Minus_Node
Minus_Node Tree_Factory::create_minus_command(int suite)
{
  return new Minus_Node(suite);
}
//method for num node
Num_Node Tree_Factory::create_num_command(int suite)
{
  return new Num_Command(suite); 
}
