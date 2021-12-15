#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numero, pos = 1, mayor = 0;
    for(int i = 1; i <= 100; i++) {
        cin>>numero;
        if(numero > mayor){
            mayor = numero;
            pos = i;
        }
    }
    cout<<mayor<<endl<<pos<<endl;
    return 0;
}