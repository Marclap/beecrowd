#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin>>casos;
    while(casos--){
        unsigned long long int numero, con = 0;
        cin>>numero;
        for(unsigned long long int i = 2; (i * i) <= numero; i++) {
            if(numero % i == 0)
                con++;
        }
        if(con == 0)
            cout<<numero<<" eh primo"<<endl;
        else
            cout<<numero<<" nao eh primo"<<endl;
    }
    return 0;
}