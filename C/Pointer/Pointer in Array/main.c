//
//  배열에서 포인터
//  Pointer in Array
//
//  Created by 홍준우 on 7/18/24.
//

#include <stdio.h>

void check(int i, int *arr) {
    printf("arr[%d] vs arr[0] + %d...  ", i, i);
    if (&arr[i] == &arr[0] + i) printf("MATCHED!!\n");
    else printf("UNMATCHED!!\n");
}

void addr(int *arr) {
    printf("arr   : %p\n", arr);
    printf("arr[0]: %p\n", &arr[0]);
}

int main(void) {
    int arr[10] = {0, };
    int i = 1;
    while (i < 10) check(i++, arr);
    addr(arr);
    return 0;
}
