#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, t;
    double d, a;
    cin>>n;
    while(n--) {
        cin>>t>>a;
        if(a > d) {
            d = a;
            q = t;
        } 
    }
    if(d < 8.0) 
        cout<<"Minimum note not reached"<<endl;
    else 
        cout<<q<<endl;
    return 0;
}