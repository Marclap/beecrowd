#include <bits/stdc++.h>

using namespace std;

int main() {
    long long numero;
    int casos;
    cin>>casos;
    while (casos--) {
        int con = 0;
        cin>>numero;
        for (long i = 2; (i * i) <= numero; i++)
            if (numero % i == 0)
                con++;
        if (con >= 1) 
            cout<<"Not Prime"<<endl;
        else
            cout<<"Prime"<<endl;
    } 
    return 0;
}