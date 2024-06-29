//
//  데이터 타입
//  Data Type
//
//  Dart는 정적 타입 언어이지만, 타입 추론을 지원한다.
//
//
//  Created by 홍준우 on 6/29/24.
//

void main() {
  // Nullable 타입
  // null을 가질 수 있다.
  int? nullableData;
  // ignore: unnecessary_null_comparison
  assert(nullableData == null);

  // var 키워드
  var varData = 1;

  // 숫자 타입
  int intData = 1;
  double doubleData = 1.0;
  num numData = 1;

  // 문자열 타입
  String stringData = 'Hello, World!';
  print('num 타입($numData)은 int($intData)와 double($doubleData)의 상위 클래스이다.');

  // 불리언 타입
  bool boolData = true;

  // 리스트 타입
  List<int> listData = [1, 2, 3];

  // 맵 타입
  Map<String, int> mapData = {
    'key1': 1,
    'key2': 2,
    'key3': 3,
  };

  // 런타임 상수 변수
  final finalData = 1;
  // 컴파일 타임 상수 변수
  const int constData = 1;

  // 타입 캐스팅
  // int 와 double 두 클래스 사이 상속 관계가 없기 때문에 명시적으로 타입 캐스팅해야한다.
  int castedString = int.parse('10');
  String castedInt = 10.toString();
  num castedData = intData.toDouble();
  print('$castedData 은(는) $doubleData 이다.');
}
