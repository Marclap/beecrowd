#include <bits/stdc++.h>

using namespace std;

int main() {
    float a, b;
    do {
        cin>>a;
        if(a < 0 || a > 10.01)
            cout<<"nota invalida"<<endl;
    }while(a < 0 || a > 10.01);
    do {
        cin>>b;
        if(b < 0 || b > 10.01)
            cout<<"nota invalida"<<endl;
    }while(b < 0 || b > 10.01);
    printf("media = %.2f\n", (a + b) / 2);
    return 0;
}
