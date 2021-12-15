#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        double a, b;
        cin>>a>>b;
        if(b == 0)
            cout<<"divisao impossivel"<<endl;
        else
            cout << fixed << setprecision(1) << a / b << endl;
    }
    return 0;
}