#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long int factorial(long long int numero){
    if(numero == 0 || numero == 1)
        return 1;
    return numero * factorial(numero - 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int numero;
    cin>>numero;
    cout<<factorial(numero)<<endl;
    return 0;
}