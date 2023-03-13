#include <iostream>
#include <exception>
#include "Expr_Com_Iterator.h"
#include "Infix_Post.h"
#include "Stack_Expr_Factory.h"


int main (int argc, char * argv [])
{
          std::string a_assignment3 = "0";
          Infix_Post b_assignment3;
          int product;

          while(true)
          {
          Expr_Com_Factory factory;

          std::cout << "Please enter expression" << std::endl;
          std::cout<<"--------------------------"<<std::endl;
          std::cout<<"--------------------------"<<std::endl;
          std::cout<<"--------------------------"<<std::endl;
          std::cout<<"Type QUIT to get out"<<std::endl;
          getline(std::cin, a_assignment3);
          Array <Expr_Command*> post (a_assignment3.size());
          if(!a_assignment3.compare ("QUIT"))
          break;
          if (b_assignment3.infix_post(a_assignment3, factory, post))
          {
            Expr_Com_Iterator<Expr_Command *> iter(post);
            b_assignment3.eval_fix(iter,product);
            std::cout<<"--------------------------"<<std::endl;
            std::cout<<"--------------------------"<<std::endl;
            std::cout<<"--------------------------"<<std::endl;
            std::cout<<product<<std::endl;


          }
        }
    return 0;
}
