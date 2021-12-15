#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, pos;
    cin>>a;
    vector<int> numeros(a);
    for(int i = 0; i < a; i++)
        cin>>numeros[i];
    b = numeros[0];
    pos = 0;
    for(int i = 1; i < a; i++)
        if(b > numeros[i]) {
            b = numeros[i];
            pos = i;
        }
    printf("Menor valor: %d\nPosicao: %d\n", b, pos);
    return 0;
}