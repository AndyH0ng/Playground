//
//  상수 포인터
//  Constant Pointer
//
//  Created by 홍준우 on 7/6/24.
//

#include <stdio.h>

void constValue(void) {
    int a, b;
    // pa가 가리키고 있는 변수의 값을 바꾸지 마라!
    const int *pa = &a;
    // *pa = 3;
    pa = &b;
}

void constPointer(void) {
    int a, b;
    // pa의 값을 바꾸지 마라!
    int* const pa = &a;
    *pa = 3;
    // pa = &b;
}

int main(void) {
    constValue();
    constPointer();
    return 0;
}
