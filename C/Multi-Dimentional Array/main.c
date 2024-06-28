//
//  다차원 배열
//  Multi-Dimentional Array
//
//  메모리에는 모든 배열이 일차원 배열과 동일하게 들어간다.
//  이는 컴퓨터 메모리 상의 모든 데이터는 선형적으로 존재하기 때문이다.
//  다만 우리의 편의상 2차원으로 배열되어 있다고 나타내는 것 뿐이다.
//
//  Created by 홍준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    int arr[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int _arr[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    printf("Given Column: 2, Row: 3...\nElement: %d vs %d\n\n",
           arr[1][2], _arr[1][2]);
    printf("Given Column: 1, Row: 2...\nElement: %d vs %d\n\n",
           arr[0][1], _arr[0][1]);
    return 0;
}
