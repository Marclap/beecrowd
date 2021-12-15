#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        string operacion;
        cin>>operacion;
        int a = operacion[0] - '0', b = operacion[2] - '0';
        if(a == b)
            cout<<(a * b)<<endl;
        else if(isupper(operacion[1]))
            cout<<(b - a)<<endl;
        else
            cout<<(a + b)<<endl;
    }
    return 0;
}