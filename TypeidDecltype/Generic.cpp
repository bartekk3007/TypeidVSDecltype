#include <iostream>

template<class A, class B>
auto generic(A a, B b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}