#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, in = 0, out = 0;
    cin>>casos;
    while(casos--) {
        double a;
        cin>>a;
        if(a >= 10 && a <= 20) 
            in++;
        else
            out++;
    }
    cout<<in<<" in"<<endl<<out<<" out"<<endl;
    return 0;
}
