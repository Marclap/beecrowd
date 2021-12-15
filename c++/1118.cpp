#include <bits/stdc++.h>

using namespace std;

int main() {
    while(true) {
        double a, b;
        int seguir;
        do {
            cin>>a;
            if(a < 1.0 || a > 10.0 )
                cout<<"nota invalida"<<endl;
        }while(a >= 10.0 || a <= 1.0);
        do {
            cin>>b;
            if(b > 10.0 || b < 1.0)
                cout<<"nota invalida"<<endl;
        }while(b > 10.0 || b < 1.0);
        cout<<fixed<<setprecision(2)<<"media = "<< (a + b) / 2<<endl;
        do {
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>seguir;
        }while(seguir != 1 && seguir !=2);
        if(seguir == 2)
            break;
    }
}