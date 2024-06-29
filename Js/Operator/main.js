//
//  연산자
//  Operator
//
//  피연산자의 값이 변하는 것을 부수 효과라 한다.
//
//  Created by 홍준우 on 6/29/24.
//

// Arithmetic Operators - Binary Operators (이항 연산자)
// 부수 효과 없음
console.log(1 + 2);     // 3
console.log(1 - 2);     // -1
console.log(1 * 2);     // 2
console.log(1 / 2);     // 0.5
console.log(1 % 2);     // 1

let x;

// Arithmetic Operators - Unary Operators (단항 연산자)
x = 1;
console.log(++x);       //  2, 부수 효과 있음
console.log(--x);       //  1, 부수 효과 있음
console.log(+x);        //  1, 부수 효과 없음, 타입 변환, 문자열 연결 연산자
console.log(-x);        // -1, 부수 효과 없음, 타입 변환

// Assignment Operators (할당 연산자)
// 부수 효과 있음
console.log(x = 1);     // 1
console.log(x += 2);    // 3
console.log(x -= 2);    // 1

// Comparison Operators (비교 연산자)
// 부수 효과 없음
if (1 == '1') console.log('동등 비교 연산자 -> 암묵적 타입 변환됨');
if (1 != '1') console.log('부동등 비교 연산자 -> 암묵적 타입 변환됨');
if (1 === '1') console.log('일치 비교 연산자 -> 타입 변환 없음');
if (1 !== '1') console.log('불일치 비교 연산자 -> 타입 변환 없음');

// Conditional Operator (삼항 조건 연산자)
// 부수 효과 없음
// 그러나 if - else 와 달리 표현식인 문이다
x = 2;
console.log(x % 2 ? '홀수' : '짝수');    // 짝수