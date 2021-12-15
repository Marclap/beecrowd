#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long n;
    cin>>n;
    if (n == 0)
        cout << 0 << endl;
    else {
        deque<int> q;
        while (n > 0) {
            q.push_front(n % 16);
            n /= 16;
        }
        for (int i = 0; i < q.size(); ++i) {
            if (q[i] >= 10)
                cout << char('A' - 10 + q[i]);
            else
                cout << q[i];
        }
        cout << endl;
    }
    return 0;
}