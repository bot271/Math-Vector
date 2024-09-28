//
//  main.cpp
//  m.vector
//
//  Created by Mingze Lee on 2024/9/28.
//

#include <iostream>
#include "MathVector.h"

int main()
{
    MVector v1 = MVector(3, 4);
    MVector v2;
    v2.Reset(4.0 / 5, -3.0 / 5);
    std::cout << v2 << std::endl;
    std::cout << v1.norm() << std::endl;
    std::cout << v1 * v2 << std::endl;
    std::cout << 5 * v2 << std::endl;
}
