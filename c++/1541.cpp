#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    while(cin>>a>>b>>c)
        printf("%d\n", int(sqrt(a * b * 100 / c)));
    return 0;
}