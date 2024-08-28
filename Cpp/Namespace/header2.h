//
//  header2.h
//  Namespace
//
//  Created by 홍준우 on 8/28/24.
//

// identifier가 정의되어 있는 경우 #undef
#ifndef header2_h
// identifier 정의
#define header2_h

namespace header2 {
int num = 2;
void fun() {
    std::cout << "Header 2 executed!\n";
}
}

#endif
