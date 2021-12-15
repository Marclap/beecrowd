#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    cin>>n;
    cout<<fixed<<setprecision(1)<<double(n / log(n))<<" "<<double(1.25506 * n / log(n))<<endl;
    return 0;
}