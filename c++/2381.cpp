#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, k, i = 0;
    cin>>n>>k;
    vector<string> a(n);
    while(cin>>a[i++] && i < n);
    sort(a.begin(), a.end());
    cout<<a[k - 1]<<endl;
    return 0;
}