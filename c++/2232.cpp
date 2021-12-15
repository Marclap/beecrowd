#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    cin>>c;
    while(c--) {
        long long int a;
        cin>>a;
        cout<<fixed<<setprecision(0)<<pow(2, a) - 1<<endl;
    }
    return 0;
}