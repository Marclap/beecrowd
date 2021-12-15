#include <bits/stdc++.h>

using namespace std;

int main(){
    float a = 1.0, b = 3.01;
    for(float i = 0; i <= 2.01; i += 0.2){
        for(float j = a; j <= b; j++)
            cout<<"I="<<i<<" J="<<j<<endl;
        a += 0.2;
        b += 0.2;
    }
    return 0;
}