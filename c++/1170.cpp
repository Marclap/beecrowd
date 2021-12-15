#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--){
        float kilos;
        int conDias = 0;
        cin>>kilos;
        while(kilos > 1) {
            kilos /= 2;
            conDias++;
        }
        cout<<conDias<<" dias"<<endl;
    }
    return 0;
}
