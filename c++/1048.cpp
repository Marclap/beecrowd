#include <bits/stdc++.h>

using namespace std;

int main(){
    double salario, porcentaje, por;
    cin>>salario;
    if(salario <= 400.00)
        por = 15;
    else if(salario >= 400.01 && salario <= 800.00)
        por = 12;
    else if(salario >= 800.01 && salario <= 1200.00)
        por = 10;
    else if( salario >= 1200.01 && salario <= 2000.00)
        por = 7;
    else
        por = 4;
    porcentaje = (salario * por) / 100;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<salario + porcentaje<<endl<<"Reajuste ganho: "<<porcentaje<<endl<<"Em percentual: "<<setprecision(0)<<por<<" %"<<endl;
    return 0;
}