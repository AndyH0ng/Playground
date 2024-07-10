//
//  데이터 타입
//  Data Type
//
//  Dart는 정적 타입 언어이지만, 타입 추론을 지원한다.
//
//
//  Created by 홍준우 on 6/29/24.
//

/*
 *  var와 dynamic의 차이
 *  var는 초기화 시점에 타입이 결정되며, 다른 타입의 값을 할당할 수 없다.
 *  dynamic은 런타임에 타입이 결정되며, 다른 타입의 값을 할당할 수 있다.
 */
void variable() {
    // 초기값을 통해 타입을 추론함
    var name0 = 'Bob';

    // 객체가 단일 타입으로 제한되지 않을 경우
    Object name1 = 'Bob';
    dynamic name2 = 'Bob';
}

/*
 *  Nullable 타입의 경우 초기값으로 null을 가질 수 있다.
 *  숫자 또한 객체이기에, 숫자 타입 변수도 초기값으로 null을 갖는다.
 *  반면 Non-nullable 타입은 초기값을 지정해야 한다.
 */
void defaultValue() {
    int? cnt;
    assert(cnt == null);
}

/*
 *  Late 변수
 *  Non-nullable 타입의 변수의 초기화 여부를 컴파일러가 검사하지 않는다.
 *    - 선언 이후 초기화되는 Non-nullable 변수 선언
 *    - 변수의 초기화를 지연
 *
 *    → 변수의 초기화 비용이 비쌀 경우 유용하다.
 */
late String desc;
void lateValue() {
    desc = 'Got\'em!';
    print(desc);
}

/*
 *  Final / Const 변수
 *  const는 컴파일 타임 상수이다.
 *  타입 어노테이션은 생략 가능하다.
 *  클래스 레벨 변수를 사용할 때는 static const를 사용하자.
 */
void constantValue() {
    final name1 = 'Bob';
    final String name2 = 'Bob';
    final name3;
    name3 = 'Bob';
    const bar = 1000000;
    const double atm = 1.01325 * bar;
    // const name4;
    // name4 = 'Bob';
}

/*
 *  const는 상수 값을 만드는 생성자를 만드는 데 사용할 수도 있다.
 */
void constConstructor() {
    var foo = const [];
    foo = [2, 3, 5, 7];
    const bar = [];
    // bar = [2, 3, 5, 7];
}