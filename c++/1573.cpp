#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int a, b, c;
    while(cin>>a>>b>>c && (a + b + c)) {
        long long int tmp = a * b * c;
        cout<<(int) cbrt(tmp)<<endl;
    }
    return 0;
}