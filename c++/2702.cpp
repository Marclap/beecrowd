#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2, res = 0;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if(a2 > a1)
        res += (a2 - a1);
    if(b2 > b1)
        res += (b2 - b1);
    if(c2 > c1)
        res += (c2 - c1);
    cout<<res<<endl;
    return 0;
}