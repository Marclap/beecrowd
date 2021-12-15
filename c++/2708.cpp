#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string a;
    int b, s = 0, v = 0;
    while(cin>>a && a!= "ABEND") {
        cin>>b;
        if(a == "SALIDA"){
            s += b;
            v++;
        } else {
            s -= b;
            v--;
        }
    }
    cout<<s<<endl<<v<<endl;
    return 0;
}