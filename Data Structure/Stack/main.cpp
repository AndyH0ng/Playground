//
//  Stack
//  후입선출 (LIFO)
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <char> s;
    for (char i = 'A'; i <= 'E'; s.push(i++));
    while (!s.empty()) {
        cout
        << "Size: " << s.size() << ' '
        << "Top: " << s.top() << '\n';
        s.pop();
    }
    return 0;
}
