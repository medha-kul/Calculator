// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Tree_Eval.h"
#include "Expr_Parser.h"


//constructor
Expr_Parser::Expr_Parser(void)
{

}

//destructor
Expr_Parser::~Expr_Parser(void)
{

}

//method to evaluate expression infix to input string
  bool Expr_Parser::eval_expr (std::string & infix, int &product)
  {
    Tree_Eval build_visitor_;
    std::istringstream input (infix);
    Tree_Builder build_one_;
    int inl_line = 0;
    Tree_Factory factory;
    bool logitech = true;
    std::string offshoot_;

    while (!input.eof ())
	{
		if(offshoot_=="/"|| offshoot_ =="%")
			inl_line++;
      input >> offshoot_;
 if(inl_line>0 && atoi(token.c_str())==0)
		{
			tree_exception();
			return false;

		}
	}

	if (!this->parser_act (infix, build_one_,factory))
		return false;
	Tree_Expr * expr = build_one_.get_expr ();

	if (0 == expr)
			return false;
	product = expr->eval (build_visitor_);

	delete expr;

	return true;
}

//Method to parse the expression
//
bool Expr_Parser::parser_act(std::string & infix, Expr_Build & m, Tree_Factory & factory);
{


	std::string offshoot_;
  std::istringstream input(infix);
  Expr_Node * node = 0;
  int inl_line_one = 0;
  int inl_line_two  = 0;
	b.builder_expr();

	while (!input.eof ())
	{
		input >> offshoot_;
    if (offshoot_ == "-")
			m.builder_Sub(factory);
		else if (offshoot_=="*")
			m.builder_Mul(factory);
    else if (offshoot_ =="+")
			m.builder_Add(factory);
    else if (offshoot_ =="%")
		  m.builder_Mod(factory);
		else if (token =="/")
		  m.builder_Div(factory);

  else if(offshoot_.length()==1 && (std::isdigit(offshoot_[0])) )
      m.builder_Num(factory,atoi(token.c_str()));
  else if(offshoot_.length()>1 )
		{
			size_t index = 0;
  if(offshoot_[0]=='-')
				index = 1;

			for(; index<offshoot_.length(); ++index)
			{
  if(!std::isdigit(offshoot_[index]))
				{
					std::cout<<"-------------------------------"<<std::endl;
          std::cout<<"-------------------------------"<<std::endl;
          std::cout<<"Please try again with valid input like 5 + 4 - 7"<<std::endl;
          std::cout<<"-------------------------------"<<std::endl;
          std::cout<<"-------------------------------"<<std::endl;

					return false;
				}
			}

			m.builder_Num(factory,atoi(offshoot_.c_str()));

	}
		else if (offshoot_=="(")
			{
      inl_line_one = 1;
			inl_line_two = 0;
      std::string expr_fix= "";

			while(!input.eof() &&  inl_line_one!= inl_line_two)
			{
				input >> offshoot_;

				if(offshoot_=="(")
					inl_line_one++;

				if(offshoot_==")")
					inl_line_two++;

				if(inl_line_one != inl_line_two)
					expr_fix.append(offshoot_+" ");
			}

			if(inl_line_two != 	inl_line_two)
			{
        std::cout<<"-------------------------------"<<std::endl;
        std::cout<<"-------------------------------"<<std::endl;
        std::cout<<"Please try again with valid input like 5 + 4 - 7"<<std::endl;
        std::cout<<"-------------------------------"<<std::endl;
        std::cout<<"-------------------------------"<<std::endl;
				return false;
			}

			Expr_Parser parser_one;
			int product;
      std::string temp = expr_fix.substr(0, expr_fix.length() - 1);
      parser_one.eval_expr(temp, product);
      m.builder_Num(factory, product);

		}

		else
		{
      std::cout<<"-------------------------------"<<std::endl;
      std::cout<<"-------------------------------"<<std::endl;
      std::cout<<"Please try again with valid input like 5 + 4 - 7"<<std::endl;
      std::cout<<"-------------------------------"<<std::endl;
      std::cout<<"-------------------------------"<<std::endl;
			return false;
		}


	}

	return true;


}
