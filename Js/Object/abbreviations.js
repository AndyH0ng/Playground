//
//  프로퍼티의 축약 표현
//  Abbreviations
//
//  ES6에서는 간편하고 짧은 객체 리터럴 문법을 제공한다.
//
//  Created by 홍준우 on 6/30/24.
//

var x = 1, y = 2;
var obj = { x, y };
console.log(obj);   // { x: 1, y: 2 }

// ES6 이전: 프로퍼티 키를 동적 생성하려면 객체 리터럴 외부에서 대괄호를 사용해야 한다.
var prefix = 'prop';
var i = 0;
var ES5 = {};
ES5[prefix + '-' + ++i] = i;
ES5[prefix + '-' + ++i] = i;
ES5[prefix + '-' + ++i] = i;
console.log(ES5);   // { 'prop-1': 1, 'prop-2': 2, 'prop-3': 3 }

// ES6: 객체 리터럴 내부에서도 대괄호를 사용해 동적으로 프로퍼티 키를 생성할 수 있다.
var ES6 = {
    [`${prefix}-${++i}`]: i,
    [`${prefix}-${++i}`]: i,
    [`${prefix}-${++i}`]: i
};
console.log(ES6);   // { 'prop-4': 4, 'prop-5': 5, 'prop-6': 6 }
