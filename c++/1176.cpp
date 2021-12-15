#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int casos, dato;
    scanf("%lld", &casos);
    while(casos--) {
        scanf("%lld", &dato);
        vector<long long int> fibo(dato + 1);
        for(int i = 0; i <= dato; i++) {
            if(i == 0 || i == 1)
                fibo[i] = i;
            else
                fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        printf("Fib(%lld) = %lld\n", dato, fibo[dato]);
    }
    return 0;
}