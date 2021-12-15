#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int cv, ce, cs, fv, fe, fs;
    cin>>cv>>ce>>cs>>fv>>fe>>fs;
    int resc = (cv * 3) + ce;
    int resf = (fv * 3) + fe;
    if(resc == resf && cs == fs)
        cout<<"="<<endl;
    else if(resf == resc) {
        if(fs > cs)
            cout<<"F"<<endl;
        else
            cout<<"C"<<endl;
    } else if(resc > resf)
        cout<<"C"<<endl;
    else
        cout<<"F"<<endl;
    return 0;
}