// 접근 제한자 underscore가 없으면 public 상태이다.
int publicNum = 1;
int _hiddenNum = 1;

void publicFlag() {
    String flag = 'FLAG{PUBLIC}';
    print('Flag is $flag');
}
void _hiddenFlag() {
    String flag = 'FLAG{HIDDEN}';
    print('Flag is $flag');
}

class publicClass {
    String? Quote;
    String _hiddenQuote = 'Oh, you sneaky little rat!';
}

class _hiddenClass { }

void main() {
    publicNum = 2;
    _hiddenNum = 2;

    publicFlag();
    _hiddenFlag();

    publicClass();
    _hiddenClass();
}