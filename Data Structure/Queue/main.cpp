//
//  Queue
//  선입선출
//
//  Created by 홍준우 on 8/28/24.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<char> q;
    for (int i = 'A'; i <= 'E'; i++) q.push(i);
    cout << "FRONT" << ' ';
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << "BACK" << '\n';
    return 0;
}
