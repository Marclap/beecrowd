#include <bits/stdc++.h>

using namespace std;

int main(){
    int par = 0, impar = 0, positivo = 0, negativo = 0, val;
    for(int i = 0; i < 5; i++){
        cin>>val;
        if(abs(val % 2) == 0)
            par++;
        else
            impar++;
        if(val < 0)
            negativo++;
        else if(val > 0)
            positivo++;
    }
    cout<<par<<" valor(es) par(es)"<<endl<<impar<<" valor(es) impar(es)"<<endl<<positivo<<" valor(es) positivo(s)"<<endl<<negativo<<" valor(es) negativo(s)"<<endl;
    return 0;
}