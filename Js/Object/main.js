//
//  객체
//  Object
//
//  객체는 0개 이상의 프로퍼티로 구성되며, 프로퍼티는 키(Key)와 값(Value)으로 구성된다.
//  키는 문자열 또는 심볼(Symbol)이며, 값은 모든 데이터 타입이 될 수 있다.
//
//  Created by 홍준우 on 6/30/24.
//

var object = {
    alphabet: 'A',
    // 식별자 네이밍 규칙을 준수하지 않을 경우 따옴표를 사용해야 한다.
    // 따옴표를 생략할 경우 alpha-bet의 '-'는 연산자로 해석되어 에러가 발생한다.
    'alpha-bet': 'B',
    // 문자열이나 심볼 외의 값을 키로 사용할 경우 문자열로 암묵적 타입 변환이 이루어진다.
    0: 'zero',
    // 중복 선언할 경우 마지막으로 선언된 값으로 덮어씌운다.
    0: 'ZERO',
    fun: function () {
        console.log(`Key alphabet에 대한 값은 ${this.alphabet}`);
    }
};

console.log(typeof(object));    // object

console.log(object[0]);         // object[0] -> object['0'] -> 'ZERO'

// 프로퍼티 값 갱신
object.alphabet = 'Z';
console.log(object.alphabet);   // Z

// 프로퍼티 동적 생성
object.number = 1;
console.log(object.number);     // 1

// 프로퍼티 삭제
delete object.number;
console.log(object.number);     // undefined
