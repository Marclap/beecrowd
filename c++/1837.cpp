#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, q = 0, r = 0;
    cin>>a>>b;
    for(r = 0; r < abs(b); r++)
        if((a - r) % b == 0){
            q = (a - r) / b;
            break;
        }
    cout<<q<<" "<<r<<endl;
    return 0;
}