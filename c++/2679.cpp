#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long int a;
    cin>>a;
    if(a % 2 == 0)
        a+=2;
    else
        a++;
    cout<<a<<endl;
    return 0;
}