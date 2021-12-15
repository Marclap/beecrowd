#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    double res = 0.0;
    cin>>casos;
    while(casos--) {
        res += 6.0;
        res = 1.0 / res;
    }
    res += 3.0;
    printf("%.10f\n", res);
    return 0;
}