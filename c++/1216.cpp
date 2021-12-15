#include <bits/stdc++.h>

using namespace std;

int main() {
    char name[10000];
    double con = 0.0, total = 0.0, a;
    while(gets(name)) {
        cin>>a;
        getchar();
        total += a;
        con += 1.0;
    }
    cout<<fixed<<setprecision(1)<<total / con<<endl;
    return 0;
}
