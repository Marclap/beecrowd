#include <bits/stdc++.h>

using namespace std;

int main() {
    double matriz[12][12], sum = 0, con = 0;
    string op;
    cin>>op;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin>>matriz[i][j];
    for(int i = 1; i < 12; i++)
        for(int j = 0; j < i; j++) {
            sum += matriz[i][j];
            con++;
        }
    if(op == "S")
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum / con<<endl;
    return 0;
}