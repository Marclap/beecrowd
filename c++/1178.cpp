#include <bits/stdc++.h>

using namespace std;

int main() {
    double a;
    vector<double> b(101);
    cin>>a;
    for(int i = 0; i < 100; i++) {
        b[i] = a;
        a /= 2;
        printf("N[%d] = %.4f\n", i, b[i]);
    }
    return 0;
}
