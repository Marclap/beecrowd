#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, x, y, aux, soma;
    while(true) {
        cin >> x >> y;
        if(x <= 0) break;
        if(y <= 0) break;
        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }
        soma = 0;
        for(int i = x; i <= y; i++) {
            cout<<i<<" ";
            soma += i;
        }
        cout<<"Sum="<<soma<<endl;
    }
    return 0;
}