#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int cuadros;
        cin>>cuadros;
        unsigned long long potencia = 1, suma = 0;
        for(int i = 0; i < cuadros; i++){
            suma += potencia;
            potencia <<= 1;
        }
        cout<<suma / 12000<<" kg"<<endl;
    }
    return 0;
}
