#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<float> numeros(100);
    for(int i = 0; i < 100; i++)
        cin>>numeros[i];
    for(int i = 0; i < 100; i++)
        if(numeros[i]<=10.0)
            printf("A[%d] = %.1f\n", i, numeros[i]);
    return 0;
}