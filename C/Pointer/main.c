//
//  포인터
//  Pointer
//
//  포인터는 변수이다.
//  int는 정수형 데이터를, float는 실수형 데이터를 저장한다.
//  그러면 포인터는? 특정 데이터가 저장된 주소값을 저장한다.
//
//  1. 일단 변수가 정의되면 주소값은 불변한다.
//  2. 엄밀히 말하면 포인터에는 시작 주소값만이 저장되며,
//  3. 포인터의 type에 의해 읽어들일 메모리의 크기가 지정된다.
//
//  Created by 홍준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    int n = 2;
    // MARK: - & 연산자: 데이터의 주소값
    int *p = &n;
    printf("정수형 변수 n이 저장된 주소값: %p\n", &n);
    printf("포인터 변수 p에 저장된 주소값: %p\n", p);
    // MARK: - * 연산자: 주소값에 위치한 데이터
    printf("정수형 변수 n에 저장된 데이터: %d\n", n);
    printf("포인터 변수 p가 가리키는 주소값에 저장된 데이터: %d\n", *p);
    // MARK: - * 연산자를 통해 값 저장
    printf("1을 더하면: %d vs %d\n", ++*p, n);
    // MARK: - 포인터에 저장된 주소값 변경
    int m = 4;
    p = &m;
    printf("정수형 변수 m에 저장된 데이터: %d\n", *p);
    return 0;
}
