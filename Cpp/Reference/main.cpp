//
//  main.cpp
//  Reference
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>

void pointer() {
    int N = 0;
    int *p = &N;
    *p = 1;
    std::cout << "N: " << N << std::endl;
}

void reference() {
    int N = 0;
    int &M = N;
    M = 1;
    std::cout << "N: " << N <<
    std::endl << "M: " << M << std::endl;
}

int main() {
    pointer();
    reference();
    return 0;
}
