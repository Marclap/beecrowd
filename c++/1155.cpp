#include <bits/stdc++.h>

using namespace std;

int main() {
    float num = 0.0;
    for(float i = 1; i <= 100; i++)
        num += (1 / i);
    printf("%.2f\n", num);
    return 0;
}