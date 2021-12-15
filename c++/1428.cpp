#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        double n, m;
        cin>>n>>m;
        int a = ceil((n - 2) / 3), b = ceil((m - 2) / 3);
        cout<<a * b<<endl;
    }
    return 0;
}