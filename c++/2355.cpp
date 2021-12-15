#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int minutos;
    while(scanf("%lld", & minutos) && minutos) {
        double valor = minutos / 90.0;
        long long int brazil = floor(valor * 1), alemania = ceil(valor * 7);
        cout<<"Brasil "<<brazil<<" x Alemanha "<<alemania<<endl;
    }
    return 0;
}