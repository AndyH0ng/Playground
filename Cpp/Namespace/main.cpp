//
//  main.cpp
//  Namespace
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>
#include "header1.h"
#include "header2.h"

// namespace의 이름에 헤더 파일 이름이 포함될 경우 암묵적으로 호출 가능
namespace header1 {
void function() {
    fun();
    header2::fun();
}
}

using header2::fun;

// 익명 네임스페이스: 정의한 파일 내에서만 접근 가능
namespace {
bool anonymousNamespace = true;
bool isAccessibleFromOtherFiles = false;
}

int main() {
    header1::function();
    header1::fun();
    fun();
    if (anonymousNamespace)
        std::cout << "Anonymous namespace called!\n";
    return 0;
}
