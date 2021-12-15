#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, con = 0;
    cin>>x>>y;
    for(int i = 1; i <= y; i++) {
        cout<<i;
        con++;
        if(con == x) {
            cout<<endl;
            con = 0;
        } else {
            cout<<" ";
        }
    }
    return 0;
}
