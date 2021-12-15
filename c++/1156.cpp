#include <bits/stdc++.h>

using namespace std;

int main() {
    float num = 0.0, a = 1;
    for(float i = 1; i <= 39; i+=2){
        num += (i / a);
        a *= 2;
    }
    printf("%.2f\n", num);
    return 0;
}