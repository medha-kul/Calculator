// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Infix_Post
//

//NOTE: I have used the sample code in slides for the stringstream object



#include "Infix_Post.h"


/// Default constructor.
/**
  * Initializing constructor.
  *
  * */
Infix_Post::Infix_Post(void)
{

}
/// Destructor.
Infix_Post::~Infix_Post()
{

}

//In to Post
  bool infix_post (const std::string & infix,Expr_Com_Factory & factory,Array <Expr_Command *> & post)
  {
    Stack <Expr_Command *> temp;
    int notice = 0;
    int perform_=-1;
    std::istringstream input(infix);
    std::string survey_;
    std::string count_;
    Expr_Command * com = 0;

    input >> survey_;

      if (survey_=="-")
      {
        com = factory.create_sub_command();
          // COMMENT: You should implement the precedence on
          // the command object since it is better place there.
          //RESPONSE: I made method for the precendence value(past) in Sub_Command.cpp & Sub_Command.h and set default value 0
        notice = 1;

      }
      else if (survey_=="+")
      {
        com = factory.create_add_command();
          // COMMENT: You should implement the precedence on
          // the command object since it is better place there.
          //RESPONSE: I made method for the precendence value(past) in Add_Command.cpp & Add_Command.h and set default value 0
        notice=-1;
      }
      else if (survey_=="/")
      {
        com = factory.create_div_command();
          // COMMENT: You should implement the precedence on
          // the command object since it is better place there.
          //RESPONSE: I made method for the precendence value(past) in Div_Command.cpp & Div_Command.h and set default value 1
        notice=1;
      }
      else if (survey_=="*")
      {
        com = factory.create_multi_command();
          // COMMENT: You should implement the precedence on
          // the command object since it is better place there.
          //RESPONSE: I made method for the precendence value(past) in Multi_Command.cpp & Multi_Command.h and set default value 1
        notice=1;
      }
      else if (survey_=="%")
      {
        com = factory.create_mod_command();
          // COMMENT: You should implement the precedence on
          // the command object since it is better place there.
            //RESPONSE: I made method for the precendence value(past) in Mod_Command.cpp & Mod_Command.h and set default value 2
        notice=1;

      }
      else if(survey_=="(" )
		  {
			 com = factory.create_parenthesis_command();
			 temp.push(com);
		  }

      if (notice==1)
      {
        if(temp.is_empty() || temp.top()->past() == 5)
        temp.push(com);
      else
      {
        if(temp.top()->past()!=5 && temp.top()->past() < com->past())
          temp.push(com);
        else
        {
          while(!temp.is_empty() && temp.top()->past()!=4 && temp.top()->past()>=com->past())
          {
            post.set(++perform_,temp.top());

            temp.pop();
          }
          temp.push(com);
        }
      }
      notice =0;
    }

    while(!temp.is_empty())
      {
            if(temp.top()->past()==4)
            {
                post.resize(perform_+1);
                //return delete_post(post,temp);
              }
                  post.set(++perform_, temp.top());
                  temp.pop();
                }

}

bool Infix_Post::delete_post (Array<Expr_Command*> & post, Stack<Expr_Command*> &temp)
      {
        while (!temp.is_empty()){
          temp.pop();
               std::cout<<"--------------------------"<<std::endl;
               std::cout<<"--------------------------"<<std::endl;
               std::cout<<"--------------------------"<<std::endl;
               std::cout << "Wrong, Retype"<<std::endl;
               std::cout<<"--------------------------"<<std::endl;
               std::cout<<"--------------------------"<<std::endl;
               std::cout<<"--------------------------"<<std::endl;


        }
             Expr_Com_Iterator<Expr_Command*> post_one(post);
             for (; !post_one.check_mate(); post_one.proceed())
             {
                 delete *post_one;

                }
                 return false;

      }




bool Infix_Post::eval_fix(Expr_Com_Iterator<Expr_Command *> & iter, int & product)
 {
        Stack <int> stack;
       Expr_Com_Iterator<Expr_Command*> post_second= iter;
       for (; !iter.check_mate(); iter.proceed())
       {
          if(!(*iter)->testing(stack))
           return false;
       }


       for (; !post_second.check_mate(); post_second.proceed()){
         delete *post_second;
         product = stack.top();
         stack.pop();
       }

       return true;
}
