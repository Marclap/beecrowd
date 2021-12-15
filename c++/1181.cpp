#include <bits/stdc++.h>

using namespace std;

int main(){
    int fila;
    double matriz[12][12], sum = 0;
    string op;
    cin>>fila>>op;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin>>matriz[i][j];
    for(int i = 0; i < 12; i++)
        sum += matriz[fila][i];
    if(op == "S")
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum / 12<<endl;
    return 0;
}
