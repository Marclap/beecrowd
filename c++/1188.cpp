#include <bits/stdc++.h>

using namespace std;

int main() {
    double matriz[12][12], sum = 0, con = 0;
    string op;
    cin>>op;
    for(int i = 0; i < 12; i++)
        for(int j = 0; j < 12; j++)
            cin>>matriz[i][j];
    int i = 1, j = 10, fil = 11;
    while(i < j) {
        for(int k = i; k <= j; k++) {
            sum += matriz[fil][k];
            con++;
        }
        fil--;
        i++;
        j--;
    }
    if(op == "S")
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum / con<<endl;
    return 0;
}