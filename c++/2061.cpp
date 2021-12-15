#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    while(b--) {
        string accion;
        cin>>accion;
        if(accion == "fechou")
            a++;
        else
            a--;
    }
    cout<<a<<endl;
    return 0;
}