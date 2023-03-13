// $Id: Expr_Com_Iterator.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Expr_Com_Iterator

//Default Constructor
template <typename T>
Expr_Com_Iterator<T> :: Expr_Com_Iterator( Array<T> &array)
	:arr_(array),
	cur_size_(0)
{

}
//
// ~Expr_Com_Iterator
template <typename T>
Expr_Com_Iterator<T> ::~Expr_Com_Iterator(void)
{

}
//checking
template <typename T>
bool Expr_Com_Iterator<T>::check_mate(void)
{
	return (this->cur_size_>=this->arr_.size());
}
//
//increment to the next element
template <typename T>
bool Expr_Com_Iterator<T> :: proceed(void)
{
	++this->cur_size_;
	return true;
}
//
// operator
//
template <typename T>
T  Expr_Com_Iterator <T> ::operator * (void)
{
	return this->arr_.get(this->cur_size_);
}
//
// operator
//
template <typename T>
T  Expr_Com_Iterator<T>::operator->(void)
{
	return &this->arr_.get(this->cur_size_);
}
