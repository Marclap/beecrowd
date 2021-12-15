#include <bits/stdc++.h>

using namespace std;

int m;

bool comparar(int a, int b) {
    if (a % m == b % m) {
        if (a & 1) {
            if (b & 1)
                return a > b;
            return true;
        } else
            if (b & 1)
                return false;
            else
                return a < b;
    }
    return (a % m) < (b % m);
}

int main() {
    int num;
    while(scanf("%d%d", &num, &m) && num + m) {
        printf("%d %d\n", num, m);
        vector<int> numeros(num);
        for(int i = 0; i < num; i++)
            scanf("%d", &numeros[i]);
        sort(numeros.begin(), numeros.end(), comparar);
        for(int i = 0; i < num; i++)
            printf("%d\n", numeros[i]);
    }
    printf("0 0\n");
    return 0;
}