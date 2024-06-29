//
//  데이터 타입 - 숫자
//  Data Type - Number
//
//  JavaScript는 단 하나의 숫자 타입이 존재한다.
//  모든 숫자를 64비트 부동 소수점 형태로 저장하기 때문에 정수, 실수를 구분하지 않는다.
//
//  Created by 홍준우 on 6/29/24.
//

const binary = 0b01000001;
const octal = 0o101;
const hex = 0x41;
console.log(binary, octal, hex);                     // 65 65 65
console.log(binary === octal && octal === hex);      // true
console.log(1.0 === 1);                              // true

//  숫자 타입은 추가적으로 세 가지 특별한 값들도 표현할 수 있다.
console.log(10 / 0);            // Infinity
console.log(10 / -0);           // -Infinity
console.log(1 * 'String');      // NaN
console.log(0 / 0);             // NaN