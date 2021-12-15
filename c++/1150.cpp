#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int x, z, con = 0, tmp = 0;
    cin>>x;
    do {
        cin>>z;
    }while(z <= x);
    for(long long int i = x; tmp <= z; i++){
        tmp += i;
        con++;
    }
    cout<<con<<endl;
    return 0;
}