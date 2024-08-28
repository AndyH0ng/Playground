//
//  main.cpp
//  Set
//
//  Created by 홍준우 on 8/29/24.
//

#include <iostream>
#include <set>

using namespace std;

int main(void) {
    set <int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    set <int>::iterator p = begin(s);
    cout << *p << endl;
    // for_each Lambda 호출
    for_each(s.begin(), s.end(), [](int n) {
        cout << n << endl;
    });
}
