#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int a;
    cin>> a;
    for(int i = 1; i <= a; i++)
        cout<<fixed<<setprecision(0)<<i<<" "<<pow(i, 2)<<" "<<pow(i, 3)<<endl;
    return 0;
}