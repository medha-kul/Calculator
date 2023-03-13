// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include<exception>
#include<iostream>
#include "Array.h"
#include "Stack.h"
#include "Expr_Tree_Builder.h"
#include "Tree_Eval.h"
#include "Expr_Parser.h"

using namespace std;

int main(int argc, char * argv [])
{

	std::string _one_input=" ";

	while(true)
	{
		Expr_Parser parser_one;
    std::cout << "Enter expression: "<<std::endl;
    std::cout << "-----------"<<std::endl;
    getline(std::cin,_one_input);
    if(!_one_input.compare("QUIT")) break;
    int product;
    if(parser_one.eval_expr(_one_input, product))
				std::cout<<product<<std::endl;
        std::cout << "-----------"<<std::endl;

	}

	return 0;

}
