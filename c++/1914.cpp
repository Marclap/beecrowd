#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x;
    cin>>x;
    while(x--) {
        string nombre1, indicador1, nombre2, indicador2;
        long long int a1, a2, res;
        cin>>nombre1>>indicador1>>nombre2>>indicador2>>a1>>a2;
        res = a1 + a2;
        if(res % 2 && indicador1 == "IMPAR")
            cout<<nombre1<<endl;
        else if(res % 2 && indicador2 == "IMPAR")
            cout<<nombre2<<endl;
        else if(!(res % 2) && indicador1 == "PAR")
            cout<<nombre1<<endl;
        else
            cout<<nombre2<<endl;
    }
    return 0;
}