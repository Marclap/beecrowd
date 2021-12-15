#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin>>casos;
    while(casos--){
        string a;
        cin>>a;
        cout<<fixed<<setprecision(2)<<float(a.size() / 100.0)<<endl;
    }
    return 0;
}