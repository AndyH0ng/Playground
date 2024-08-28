//
//  header.h
//  Namespace
//
//  Created by 홍준우 on 8/28/24.
//

// identifier가 정의되어 있는 경우 #undef
#if !defined header1_h
// identifier 정의
#define header1_h
#include <iostream>

namespace header1 {
int num = 1;
void fun() {
    std::cout << "Header 1 executed!\n";
}
}

#endif
