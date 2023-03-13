// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>
#include <algorithm> 
//
// Array
//
template <typename T>
Array <T>::Array (void)
//: Array_Base <T> () //using base member initialization
: data_(new T [10]),
  cur_size_(0),
  max_size_(10) //using base member initialization
{

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length)
//: Array_Base<T> (length)
: data_(new T [length]),
  cur_size_(length),
  max_size_(length)
{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill)
//:Array_Base<T> (length,fill)
:data_(new T[length]),
    cur_size_(length),
    max_size_(length)
{
  for(size_t index = 0 ; index<length;++index)
        {
          data_[index] = fill;

        }
}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array)
//:Array_Base<T> (array)
:data_(new T[array.size()]),
    cur_size_(array.size()),
    max_size_(array.size())
{

      data_ = new T [cur_size_];
      for (size_t index =0 ; index<=array.cur_size_;index++)
              {

                data_[index]=array.data_[index];

                }


}


//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{
        try
          {
              delete [] this->data_;
            }
              catch(...)
          {

          }
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs)
{
      if(this ==&rhs){
        return *this;
      }



          if(rhs.size()!=this->cur_size_){
              this->resize(rhs.size());
          }

                  Array<T> temp_array(rhs);
                  this->cur_size_=temp_array.cur_size_;


                  for(int i=0;i<temp_array.cur_size_;++i){
                            this->data_[i]=temp_array.data_[i];
                  }

                    return *this;

}
//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index)
{
    if(index>=this->cur_size_){
                throw std::out_of_range("-----------------------Invalid index---------------------");
              }
      else{
                return this->data_[index];
          }
}

//
// operator []
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const
{
      if(index>=this->cur_size_){
            throw std::out_of_range("-----------------------Invalid index---------------------");
          }

          else {
            return this->data_[index];
            }
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const
{
      if(index>=this->cur_size_){
          throw std::out_of_range("-----------------------Invalid index---------------------");
        }

        else {
            return this->data_[index];
          }
}

//
// set
//
template <typename T>
void Array<T>::set (size_t index, T value)
{
      if(index>=this->cur_size_){
                  throw std::out_of_range("-----------------------Invalid index---------------------");
        }

        else{
                this->data_[index] = value;
        }
}


//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const
{
    return this->find(value,0);
}

//
// find (char, size_t)
//
template <typename T>
int Array <T>::find (T val, size_t start) const
{
      size_t arr_base_ =-1;
      if(start >=this->cur_size_)
          throw std::out_of_range("------------------- Out of Range Exception --------");


      for(size_t index = 0 ; index < this->cur_size_ ; index++)
      {
        if(data_[index] == val)
                  arr_base_ = index;
                   index = cur_size_;

        }

      return arr_base_;
}


//
// resize
//

template <typename T>
void Array <T>::resize (size_t new_size)
{

//resize method: changes the cur_size_ of this array

              if(new_size<this->cur_size_){
              this->cur_size_= new_size;
              }


                else if(new_size>this->cur_size_)
                    {
                      T *new_array_=this->data_;

                      for(size_t index = 0 ; index <new_size; ++index)
                      {

                        if(index<=this->cur_size_)
                        this->data_[index] =new_array_[index];
                      }

                      this->cur_size_ = new_size;
                      this->max_size_ = new_size;

                    }

}

//
// find (char)
//

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const
{
    if (this==&rhs){
                 return true;
           }
           else if(this->cur_size_==rhs.cur_size_)
             {
               if(this->cur_size_==0 && rhs.cur_size_==0)
			             return true;

               for(size_t index = 0; index<rhs.cur_size_;++index)
                    {
                         if(this->data_[index]==rhs.data_[index])
                             return true;

                      }
                        return false;
              }

              else{
                    return false;
                  }

}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const
{
      return !(*this == rhs);
}
