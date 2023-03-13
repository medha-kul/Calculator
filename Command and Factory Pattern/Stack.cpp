// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Stack
//

template <typename T>
Stack <T>::Stack (void)
    :arr_(Array<T>()),
      head_(-1)
{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
  : arr_ (Array <T> (stack.size())),
    head_(stack.head_),
    max_size_(stack.max_size_)

{

}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{

}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
        if(this->head_==this->arr_.size()){
                this->arr_.resize(this->arr_.size() + 10);
        }
            //arr_.set(++head_,element);
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
        if(this->head_>=0){
            head_--;
          }

                else{
                    empty_exception();
                    }

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{

    if (this != &rhs){

      this->arr_=(this->arr_= rhs.arr_);
      this->head_=rhs.head_;
      this->max_size_=rhs.max_size_();
      this->arr_.cur_size_ = rhs.size();

    }

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
          this->head_=-1;
          this->arr_.resize(0);
}
