// -*- C++ -*-
// $Id: Expr_Com_Iterator.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * @file       Expr_Com_Iterator.h
 *
 * $Id: Expr_Com_Iterator.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================


#ifndef _EXPR_COM_ITERATOR_
#define _EXPR_COM_ITERATOR_
#include "Array.h"

/**
 * @class Expr_Com_Iterator
 *
 * Basic stack for abitrary elements.
 */
template <typename T>
class Expr_Com_Iterator
{
public:
  /// Type definition of the type.
  typedef T type;
  /**
   * Initializing constructor.
   *
   * @param[in]      length        Initial size
   */
  Expr_Com_Iterator (Array<T> & array);
  /// Destructor.
  ~Expr_Com_Iterator (void);

  //get next element
  bool proceed(void);
  //check for the elemenet in the array
  bool check_mate(void);


  T operator * (void);
  T operator -> (void);

  private:

      Array <T> arr_;
      size_t cur_size_;
    };

    #include "Expr_Com_Iterator.cpp"


#endif //!defined _EXPR_COM_ITERATOR_H_
