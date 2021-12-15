#include <bits/stdc++.h>

using namespace std;

long long factorial(long long fac) {
    if(fac == 0 || fac == 1)
        return 1;
    return fac * factorial(fac-1);
}

int main() {
    long long int num1, num2;
    while(scanf("%lld %lld", &num1, &num2) != EOF)
        printf("%lld\n", factorial(num1) + factorial(num2));
    return 0;
}
