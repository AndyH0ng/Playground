//
//  main.cpp
//  Selection Statements
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>

int getValue() { return 32; }

void ifExpr() {
    int i = 0;
    if (int i = getValue(); i == 32)
        std::cout << "i is 32\n";
}

int main() {
    ifExpr();
    return 0;
}
