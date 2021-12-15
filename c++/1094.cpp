#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, animales = 0;
    map<string, double> valores;
    valores["C"] = 0;
    valores["R"] = 0;
    valores["S"] = 0;
    cin>>casos;
    while(casos--) {
        int val;
        string ani;
        cin>>val>>ani;
        valores[ani] += val;
        animales += val;
    }
    cout<<"Total: "<<animales<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<valores["C"]<<endl;
    cout<<"Total de ratos: "<<valores["R"]<<endl;
    cout<<"Total de sapos: "<<valores["S"]<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<(valores["C"] / animales) * 100<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<(valores["R"] / animales) * 100<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<(valores["S"] / animales) * 100<<" %"<<endl;
    return 0;
}