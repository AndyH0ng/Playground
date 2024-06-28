//
//  문자열
//  String
//
//  컴퓨터는 문자열을 char 배열에 저장한다.
//  이때 마지막에는 문자열의 끝임을 알려주는 NULL 문자 '\0'가 저장된다.
//
//  Created by 홍준우 on 6/26/24.
//

#include <stdio.h>

int main(void) {
    // MARK: - NULL 문자
    char null[3] = {'\0', 0, (char) NULL};
    char not_null = '0';
    printf("NULL 문자의 ASCII 값: %d %d %d\n", null[0], null[1], null[2]);
    printf("숫자 0의 ASCII 값: %d\n", not_null);
    // MARK: - 문자열 정의
    char sentence0[4] = {'Y', 'e', 's', '\0'};
    char sentence1[] = {"Noo"};
    printf("%s %s\n", sentence0, sentence1);
    return 0;
}
