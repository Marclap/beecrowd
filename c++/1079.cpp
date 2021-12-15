#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        vector<double> a(3);
        for(int i = 0; i < 3; i++)
            cin>>a[i];
        cout<<fixed<<setprecision(1)<<(a[0] * 2 + a[1] * 3 + a[2] * 5) / 10<<endl;
    }
    return 0;
}