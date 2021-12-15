#include <bits/stdc++.h>

using namespace std;

vector<float> valores(2000, 0);
float total = 0;

int main() {
    valores[1001] = 1.50;
    valores[1002] = 2.50;
    valores[1003] = 3.50;
    valores[1004] = 4.50;
    valores[1005] = 5.50;
    int casos;
    cin>>casos;
    while(casos--){
        int a, b;
        cin>>a>>b;
        total += (valores[a] * b);
    }
    cout<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}