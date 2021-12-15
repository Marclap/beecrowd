#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int p, k, res = 0;
        cin>>p>>k;
        if(p >= k){
            res += (p / k);
            res += (p % k);
        } else
            res = p;
        cout<<res<<endl;
    }
    return 0;
}