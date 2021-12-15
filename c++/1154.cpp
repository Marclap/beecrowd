#include <bits/stdc++.h>

using namespace std;

int main() {
    float edad, promedio = 0, con = 0;
    while(true) {
        cin>>edad;
        if(edad < 0)
            break;
        promedio += edad;
        con++;
    }
    printf("%.2f\n", (promedio / con));
    return 0;
}