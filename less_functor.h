//
// Created by Nikki on 5/3/2016.
//

#ifndef UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H

#include <string>

using std::string;

namespace CS2312
{
    //from std::less on cplusplus.com/
    template <typename T>
    class less
    {
    public:
        bool operator()(const T& x, const T& y) const {return x < y; }
        typedef T first_arg_type;
        typedef T sec_arg_type;
        typedef bool result_type;
    };

    //template specializations that I wrote per requirements
    template <>
    class less<const char*>
    {
    public:
        bool operator()(const char* a, const char* b) const {return *a < *b; }
    };

    template<>
    class less<string>
    {
    public:
        bool operator()(const string a, const string b) const {return a < b; }
    };
}

#endif //UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H

//template <class Category, class T, class Distance = ptrdiff_t,
//          class Pointer = T*, class Reference = T&>
//  struct iterator {
//    typedef T         value_type;
//    typedef Distance  difference_type;
//    typedef Pointer   pointer;
//    typedef Reference reference;
//    typedef Category  iterator_category;
//  };