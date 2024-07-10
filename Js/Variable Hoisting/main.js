//
//  변수 호이스팅
//  Variable Hoisting
//
//  JavaScript에서 변수 선언은 호이스팅이 발생한다.
//  이는 변수를 선언하기 전에 참조할 수 있다는 것을 뜻한다.
//  이는 소스코드가 순차적으로 실행되는 시점인 런타임 이전에 변수 선언이 먼저 실행되기 때문에 가능하다.
//  반면 값의 할당은 런타임 시점에 실행된다.
//
//  Created by 홍준우 on 6/29/24.
//

console.log(score);         // undefined
var score = 80;     // 1. 변수 선언 (호이스팅) -> 2. 값 할당
console.log(score);         // 80
