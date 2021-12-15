#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero, relleno = 0;
    cin>>numero;
    for(int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, relleno++);
        if(relleno == numero)
            relleno = 0;
    }
    return 0;
}