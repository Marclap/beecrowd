#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    while (cin>>k && k) {
        int n, m;
        cin>>n>>m;
        while (k--) {
            int x, y;
            cin>>x>>y;
            if (x == n || y == m) {
                cout<<"divisa"<<endl;
            } else {
                if (x > n) {
                    if (y > m)
                        cout<<"NE"<<endl;
                    else
                        cout<<"SE"<<endl;
                } else {
                    if (y > m)
                        cout<<"NO"<<endl;
                    else
                        cout<<"SO"<<endl;
                }
            }
        }
    }
    return 0;
}