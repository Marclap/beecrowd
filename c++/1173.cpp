#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero;
    cin>>numero;
    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, numero);
        numero *= 2;
    }
    return 0;
}