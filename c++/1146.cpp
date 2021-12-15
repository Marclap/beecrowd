#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int num;
    bool es = false;
    while(scanf("%lld", &num) && num) {
        es = false;
        for(long long int i = 1; i <= num; i++) {
            if(es)
                printf(" ");
            printf("%lld", i);
            es = true;
        }
        printf("\n");
    }
    return 0;
}