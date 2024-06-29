//
//  데이터 타입 - 타입
//  Data Type - Type
//
//  JavaScript는 동적 타입 언어이다.
//  즉, 변수의 타입은 할당된 값에 의해 결정된다.
//
//  값의 재할당에 의해 타입이 변할 수 있다.
//  또한 암묵적으로 타입이 변환되기도 한다.
//
//  Created by 홍준우 on 6/29/24.
//

var foo;
console.log(typeof foo);    // undefined

foo = true;
console.log(typeof foo);    // boolean

console.log(typeof --foo);  // number

foo += '1';
console.log(typeof foo);    // string

