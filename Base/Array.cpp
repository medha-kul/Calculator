// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"


Array::Array (void)
// COMMENT The current size of the array for the default constuctor is 0.
//RESPONSE: fixed, set cur_size_ to 0
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
//RESPONSE: fixed it, declared each variable on different line.
: data_(new char [10]),
  cur_size_(0),
  max_size_(10) //using base member initialization

{
  
}

Array::Array (size_t length)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
//RESPONSE: fixed it, declared each variable on different line.
    : data_(new char [length]),
    cur_size_(length),
    max_size_(length)
{
	     
}
/**
 *  Initializing constructor.
 *
 *  @param[in]      length        Initial size
 *  @param[in]      fill          Initial value for each element
       */
Array::Array (size_t length, char fill)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
//RESPONSE: fixed it, declared each variable on different line.
  : data_(new char [length]),
  cur_size_(length),
  max_size_(length)
{

    
    for(size_t i = 0 ; i<length;++i)
  	   {
  		      data_[i] = fill;

  	   }
       	     // end for

}


Array::Array (const Array & array)
// COMMENT Initialize all member variables in the base member initialization section
// of the constructor on its own line. Otherwise, it is hard to know what initialization
// has an error since it will not have its own unique line number.
//RESPONSE: fixed it, declared each variable on different line.
: data_(new char [array.max_size_]),
  cur_size_(array.cur_size_),
  max_size_(array.max_size_)
{
    for (size_t i =0 ; i<=array.cur_size_;i++)
  	     {
              
  		        data_[i]=array.data_[i];
		              
  	     }
         
	       
}

Array::~Array (void)
{
      
      try
      {
          delete [] this->data_;
      }
      catch(...)
      {
              
      }

    // COMMENT There is no need to reset the data_ variable since this object is no
    // longer useable after the desturctor returns.
    //RESPONSE:  FIXED I was deleting twice

}

const Array & Array::operator = (const Array & rhs)
{
  	if(this ==&rhs)
  		return *this;

  	else
  	{
        // COMMENT You should only change the allocation size of this array is not
        // large enough to hold rhs.
        //RESPONSE comparing it to cur_size_ instead of max, create sub for the size increase. 
                	char *sub_=this->data_;
       		      	this->cur_size_= rhs.cur_size_;
		        this->max_size_ = rhs.max_size_;

                 
		         this->data_= new char[cur_size_];

		               for(size_t i =  0 ; i< this->max_size_;++i)
		                 {
			                    this->data_[i] = rhs.data_[i];
				                      
		                  }

		         if(sub_!=0){
               			 delete []sub_;
             		}	
			         return *this;
	    }
}

char & Array::operator [] (size_t index)
{
      
      if(index>=this->cur_size_){
                    throw std::out_of_range("-----------------------Invalid index---------------------");
      }
        else{
            return this->data_[index];
        }


}

const char & Array::operator [] (size_t index) const
{
      
      if(index>=this->cur_size_){
                throw std::out_of_range("-----------------------Invalid index---------------------");
      }

  	  else {
                return this->data_[index];
      }

}

char Array::get (size_t index) const
{
      if(index>=this->cur_size_){
                  throw std::out_of_range("-----------------------Invalid index---------------------");
      }

	    else {
                return this->data_[index];
      }

}

void Array::set (size_t index, char value)
{
        if(index>=this->cur_size_){
                  throw std::out_of_range("-----------------------Invalid index---------------------");
        }

        else{
                this->data_[index] = value;
        }

}

void Array::resize (size_t new_size)
{

      if(new_size>this->cur_size_)
        {
//resize method: changes the cur_size_ of this array
            char *a2_ = this->data_;  //treating the a2 as temp variable
            this->data_= new char[new_size];


            for(size_t i = 0 ; i <new_size; ++i)
              {

                  if(i<=this->cur_size_)
                  this->data_[i] =a2_[i];
              }

              this->cur_size_ = new_size;
              this->max_size_ = new_size;
              delete[] a2_;
            }
              else if (new_size<this->cur_size_)
		                this->cur_size_= new_size;
} //end resize

int Array::find (char ch) const
{
          for (size_t i = 0; i<this->cur_size_;++i)
          {
                if(this->data_[i]==ch)
                {
                    return i;
                    break;
                }
          }

          return -1;
}

int Array::find (char ch, size_t start) const
{
    // COMMENT You are to throw out of range exception if the index is invalid,
    // and not catch it.
    //RESPONSE exception thrown before starting the for loop
      if(start >=this->cur_size_)
                throw std::out_of_range("------------------- Out of Range Exception --------");


            for(size_t i = start ; i < this->cur_size_ ; ++i)
            {
              if(data_[i] == ch)
                        return i;

            }

            return -1;
}

bool Array::operator == (const Array & rhs) const
{
    // COMMENT Check for self comparison first.
    //RESPONSE checking self comparison first
    if (this==&rhs){
                       return true;
                 }
                 else if(this->cur_size_==rhs.cur_size_)
		               {
                     for(size_t i = 0; i<rhs.cur_size_;++i)
 			                    {
 				                       if(this->data_[i]==rhs.data_[i])
 					                         return true;

 			                      }
 			                        return false;
                    }

      else{
                  return false;
          }

}

bool Array::operator != (const Array & rhs) const
{
    // COMMENT Just write: return !(*this == rhs);
    //RESPONSE used !(*this == rhs);

    return !(*this == rhs);
}

void Array::fill (char ch)
{
    for(size_t i = 0 ;i<this->cur_size_;++i)
          this->data_[i] =ch;
} //end fill
/**Shrink method reduces unused memory spaces. Here, it checks if the cur_size_ is smaller than max_size_
*/
void Array::shrink (void)
{
    // COMMENT Just updating the size is not shrinking the array. You also
    // need to update the array allocation.
    //RESPONSE booFoo as temp for updating array location
      if(cur_size_<max_size_)
      {
        char * booFoo = new char[cur_size_];
        for (size_t i =0; i<cur_size_; i++){
              booFoo[i] = data_[i];

        }
        delete[] this->data_;
        max_size_=cur_size_;
      }
} //end shrink
/** The reverse method: swaps, the first element becomes the last and the last element is the first
*/
void Array::reverse (void)
{
            char b =0 ;
            size_t a = cur_size_;
        for (int i =0; i>a;++i)
              {
                b=data_[a];
                data_[a]=data_[i];
                data_[i]=b;
                a=a-1;
              }
} //end reverse

/**
 * The slice() method returns a shallow copy of a portion of an array into
 * a new array object selected from begin to end (end not included). The original
 * array will not be modified.
 *
 * @param[in]       begin           The starting index
 * @return          A new Array object
 */
Array Array::slice (size_t begin) const
{
          Array* doSomething=new Array(cur_size_);
          size_t boo=0;
          for(int i=begin; i<=cur_size_;++i)
          {
            (*doSomething).data_[boo]=data_[i];
            boo=boo+1;
          }
          return *doSomething;
} //end slice

Array Array::slice (size_t begin, size_t end) const
{
          Array* doSomething=new Array(cur_size_);
          size_t boo=0;
          for(int i=begin; i<=end;++i)
          {
            (*doSomething).data_[boo]=data_[i];
            boo=boo+1;
          }
          return *doSomething;
}
