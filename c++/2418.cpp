#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<float> valores(5);
    for(int i = 0; i < 5; i++)
        cin>>valores[i];
    sort(valores.begin(), valores.end());
    printf("%.1f\n",valores[1] + valores[2] + valores[3]);
    return 0;
}