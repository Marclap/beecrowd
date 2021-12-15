#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int x, y;
    while(scanf("%lld%lld", &x, &y) && x && y)
        if(x > 0 && y > 0)
            printf("primeiro\n");
        else if ( x > 0 && y < 0)
            printf("quarto\n");
        else if(x < 0 && y > 0)
            printf("segundo\n");
        else
            printf("terceiro\n");

    return 0;
}