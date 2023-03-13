// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Array_Base <T>::Array_Base (void)
: data_(new T [10]),
  cur_size_(0),
  max_size_(10) //using base member initialization
{

}

//
// Array (size_t)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length)
: data_(new T [length]),
  cur_size_(length),
  max_size_(length)
{

}

//
// Array (size_t, char)
//
template <typename T>
Array_Base <T>::Array_Base (size_t length, T fill)
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
Array_Base <T>::Array_Base (const Array_Base & array)
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
Array_Base <T>::~Array_Base (void)
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
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index)
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
const T & Array_Base <T>::operator [] (size_t index) const
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
T Array_Base <T>::get (size_t index) const
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
void Array_Base <T>::set (size_t index, T value)
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
int Array_Base <T>::find (T value) const
{
    return this->find(value,0);
}

//
// find (char, size_t)
//
template <typename T>
int Array_Base <T>::find (T val, size_t start) const
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
// operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const
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
bool Array_Base <T>::operator != (const Array_Base & rhs) const
{
      return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill (T value)
{
      for(size_t index = 0 ;index<this->cur_size_;++index)
              this->data_[index] =value;
}

/**Shrink method reduces unused memory spaces. Here, it checks if the cur_size_ is smaller than max_size_
*/
template <typename T>
void Array_Base <T> ::shrink (void)
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
template <typename T>
void Array_Base<T>::reverse (void)
{
            T b =0 ;
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
 template <typename T>
Array_Base <T> Array_Base<T>::slice (size_t begin) const
{
          Array_Base <T> doSomething=new Array_Base(cur_size_);
          size_t boo=0;
          for(int i=begin; i<=cur_size_;++i)
          {
            (*doSomething).data_[boo]=data_[i];
            boo=boo+1;
          }
          return *doSomething;
} //end slice

 template <typename T>
Array_Base <T> Array_Base<T>::slice (size_t begin, size_t end) const
{
          Array_Base <T> doSomething=new Array_Base(cur_size_);
          size_t boo=0;
          for(int i=begin; i<=end;++i)
          {
            (*doSomething).data_[boo]=data_[i];
            boo=boo+1;
          }
          return *doSomething;
}
