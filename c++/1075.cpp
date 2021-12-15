#include <bits/stdc++.h>

using namespace std;

int main() {
    int numero;
    cin>>numero;
    for(int i = 2; i <= 10000; i++)
        if(i % numero == 2)
            cout<<i<<endl;
    return 0;
}
