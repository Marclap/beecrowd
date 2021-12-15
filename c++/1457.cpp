#include <bits/stdc++.h>

using namespace std;

long long int oracle(long long int x, long long int k) {
    if (x <= 0)
        return 1;
    return x * oracle(x - k, k);
}

int main () {
    long long int n;
    cin>>n;
    while (n--) {
        long long int x;
        string aux;
        cin>>x>>aux;
        cout<<oracle(x, aux.length())<<endl;
    }
    return 0;
}