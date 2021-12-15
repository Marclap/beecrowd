#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long long int> a(20);
    int con = 0;
    for(int i = 0; i < 20; i++)
        cin>> a[i];
    for(int i = 19; i >= 0; i--) {
        printf("N[%d] = %lld\n", con, a[i]);
        con++;
    }
    return 0;
}