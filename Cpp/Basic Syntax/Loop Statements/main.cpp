//
//  main.cpp
//  Loop
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>

void forLoop() {
    // for (init-expr; cond-expr; loop-expr) statement
    // A for loop terminates when a break, return or goto within statement is executed.
    for (int i = 0; i < 10; std::cout << i++ << ' ');
    
    std::cout << std::endl;
    
    // for (for-range-declaration : expr) statement
    // Facts about range-based for loop:
    //   1. Automatically recoginizes arrays.
    //   2. Recognizes containers that have .begin() and .end()
    //   3. Uses argument-dependent lookup begin() and end() for anything else.
    //   +. Note that auto keyward is preferred in the for-range-declaration.
    int arr[5] = {0, 1, 2, 3, 4};
    for (int i : arr) std::cout << i << ' ';
    
    std::cout << std::endl;
}

void whileLoop() {
    char ch = 'A';
    while (ch < 'D') std::cout << ch++ << ' ';
    
    std::cout << std::endl;
    
    // do-while loop: The test of the termination condition is made AFTER each excution of the loop.
    // which means do-while loop always executes one or more times.
    do std::cout << ch << ' '; while ('C' < ch && ch++ < 'F');
    
    std::cout << std::endl;
}

int main() {
    forLoop();
    whileLoop();
    return 0;
}
