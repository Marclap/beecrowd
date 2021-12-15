#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<float> lados(3);
    for(int i = 0; i < 3; i++)
        cin>>lados[i];
    sort(lados.rbegin(), lados.rend());
    if(lados[0] >= (lados[1] + lados[2]))
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else{
        if((lados[0] * lados[0]) == ((lados[1] * lados[1]) + (lados[2] * lados[2])))
            cout<<"TRIANGULO RETANGULO"<<endl;
        else if((lados[0] * lados[0]) > ((lados[1] * lados[1]) + (lados[2] * lados[2])))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if((lados[0] * lados[0]) < ((lados[1] * lados[1]) + (lados[2] * lados[2])))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if((lados[0] == lados[1]) && (lados[1] == lados[2]) && (lados[0] == lados[2]))
            cout<<"TRIANGULO EQUILATERO"<<endl;
        else if((lados[0] == lados[1]) || (lados[1] == lados[2]))
            cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    return 0;
}
