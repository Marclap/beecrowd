#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a, mayor = -1000;
    while(cin>>a && a)
        mayor = max(mayor, a);
    cout<<mayor<<endl;
    return 0;
}