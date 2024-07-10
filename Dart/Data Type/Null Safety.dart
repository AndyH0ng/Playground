//
//  null 안전성
//  Null Safety
//
//  Dart는 정적 타입 언어이지만, 타입 추론을 지원한다.
//
//
//  Created by 홍준우 on 7/4/24.
//

int nonNullableData = 0;
int? nullableData = 1;

int? some(arg) {
    if (arg == 10) {
        return 0;
    } else {
        return null;
    }
}

void main() {
    // nonNullableData = nullableData;
    nonNullableData = nullableData as int;
    nullableData = nonNullableData;
    // null이 저장될 수 없음 -> 초기값을 지정하지 않을 경우 컴파일 에러
    // int nonNullableData1;
    late int nonNullableData2;

    // ! 연산자
    int n = 10;
    // n = some(20)!;   // 컴파일 에러
    print('n: $n');

    // ?. 연산자

}
