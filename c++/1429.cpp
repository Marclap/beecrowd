#include <bits/stdc++.h>

using namespace std;

long long int factorial(long long int numero) {
    if(numero == 1)
        return 1;
    return numero * factorial(numero - 1);
}

int main() {
    long long int numero;
    while(cin>>numero) {
        long long int sum = 0, con = 1;
        if(numero == 0)
            break;
        while(numero > 0) {
            sum += ((numero % 10) * factorial(con));
            numero /= 10;
            con++;
        }
        cout<<sum<<endl;
    }
    return 0;
}