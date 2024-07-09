#include <iostream>
#include "include/vector_operations.hpp"

int main()
{
    Vector3 v1(1, 2, 3), v2(5, 6, 7), v3(3, 1, 2), v4;
    v4 = proyection(v1, v2);

    std::cout << add(v1, v2).toString() << '\n';
    std::cout << v4.toString() << '\n';
    std::cout << crossProduct(v1, v2).toString() << '\n';

    return 0;
}