//
//  main.cpp
//  Declaration & Definition
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>
#include <string>

// forward declaration : 전방 선언
int fun(int i);

int main() {
    const double PI = 3.14;     // 👍
    int i = fun(3);             // 👍 fun이 전방 선언되었음
//  C obj;                      // 🚫 C가 아직 선언되지 않음
    std::string str;            // 👍 std::string이 <string>에서 선언되었음
//  j = 0;                      // 🚫 타입이 명시되지 않음
    auto k = 0;                 // 👍 컴파일러에 의해 타입 추론됨
    return 0;
}

// definition : 정의
int fun(int i) { return i + 42; }

namespace N {
class C {};
}
