//
//  데이터 타입 - 문자열
//  Data Type - String
//
//  JavaScript에서 문자열은 UTF-16 형식 문자들의 집합으로 구성된다.
//  문자열은 작은 따옴표(''), 큰 따옴표(""), 백틱(``)으로 표현할 수 있다.
//
//  Created by 홍준우 on 6/29/24.
//

const template = '<ul>\n\t<li><p>Hello, World!</p></li>\n</ul>';
console.log(template);

//  표현식 삽입을 백틱(``)을 사용해 표현할 수 있다.
//  ${} 안 표현식의 결과는 문자열로 강제로 변환되어 삽입된다.
const status = 'disgusting';
const nooooo = 'the worst';
console.log(`A cucumber is ${status}.`);
console.log(`But ${1 + 9} cucumbers are ${nooooo}!`);
