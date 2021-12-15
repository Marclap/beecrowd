#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, total;
    cin>>a>>b>>c;
    total = a + b + c;
    if(total >= 0 && total < 23)
        cout<<total<<endl;
    else if(total >= 24)
        cout<<total - 24<<endl;
    else if(total < 0)
        cout<<total + 24 <<endl;
    return 0;
}