#include <bits/stdc++.h>
 
using namespace std;

const double PI = 3.1415926535897932384626433832795;
 
int main() {
    double a, b, c;
    while(cin>>a>>b>>c)
        cout<<fixed<<setprecision(2)<<(c + (b * tan(a * PI / 180.0))) * 5<<endl;
    return 0;
}