#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int a, b;
    cin>>a>>b;
    if(b % a == 0 || a % b == 0){
        cout<<"Sao Multiplos"<<endl;
    }else{
        cout<<"Nao sao Multiplos"<<endl;
    }
    return 0;
}