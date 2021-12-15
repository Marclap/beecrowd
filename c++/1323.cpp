#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero;
    while(cin>>numero) {
        if(numero == 0)
            break;
        int sum = 0;
        for(int i = 1; i <= numero; i++)
            sum += pow(i, 2);
        cout<<sum<<endl;
    }
    return 0;
}