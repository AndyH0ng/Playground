//
//  배열
//  Array
//
//  Created by 홍준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    // MARK: - initialize 되지 않은 정수의 값
    int arr0;
    printf("%d\n", arr0);
    
    // MARK: - initialize 되지 않은 배열의 값
    int arr1[3];
    arr1[0] = 1;
    printf("%d\n", arr1[1]);
    
    // MARK: - initialize 되지 않은 배열의 값
    /// 다음과 같이 배열을 정의할 경우
    /// 배열 내 초기화하지 않은 요소에는 0이 저장된다.
    int arr2[3] = {1};
    printf("%d\n", arr2[1]);
    
    int arr3[][2] = {{3, 2}, {1}};
    printf("%d %d %d %d\n",
           arr3[0][0], arr3[0][1], arr3[1][0], arr3[1][1]);
    
    // FIXME: 다차원 배열의 경우 맨 앞의 크기를 제외한 나머지 크기들을 모두 정확히 지정해줘야 한다.
    int arr4[2][] = {{3, 2}, {1}};
    printf("%d %d %d %d\n", arr4[0][0], arr4[0][1], arr4[1][0], arr4[1][1]);
    return 0;
}
