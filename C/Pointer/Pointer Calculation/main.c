//
//  포인터 연산
//  Pointer Calculation
//
//  Created by 홍준우 on 7/18/24.
//

#include <stdio.h>

int main(void) {
    int a;
    int *pa = &a;
    double b;
    double *pb = &b;
    
    printf("pa - 1: %p\n", pa - 1);       // int형 포인터 pa에 1을 뺀 값 -> -4인 값을 출력
    printf("pa    : %p\n", pa);
    printf("pa + 1: %p\n", pa + 1);       // int형 포인터 pa에 1을 더한 값 -> +4인 값을 출력
    
    printf("pb - 1: %p\n", pb - 1);       // double형 포인터 pb에 1을 뺀 값 -> -8인 값을 출력
    printf("pb    : %p\n", pb);
    printf("pb + 1: %p\n", pb + 1);       // double형 포인터 pb에 1을 더한 값 -> +8인 값을 출력
    
    return 0;
}
