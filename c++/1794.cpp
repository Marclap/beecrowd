#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, la, lb, sa, sb;
    cin>>n>>la>>lb>>sa>>sb;
    if (la <= n && n <= lb && sa <= n && n <= sb) 
        cout<<"possivel"<<endl;
    else 
        cout<<"impossivel"<<endl;
    return 0;
}