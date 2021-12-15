#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int q, e, tmp;
    cin>>q>>e;
    vector<bool> a(1000 + 10, true);
    for(int i = 0; i < e; i++) {
        cin>>tmp;
        a[tmp] = false;
    }
    while(q--) {
        cin>>tmp;
        if(!a[tmp]) {
            cout<<"0"<<endl;
        } else {
            cout<<"1"<<endl;
            a[tmp] = false;
        }
    }
    return 0;
}