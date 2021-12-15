#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b;
    scanf("%lf", &a);
    if(a >= 0 && a <= 2000)
        cout<<"Isento"<<endl;
    else if(a >= 2000.01 && a <= 3000){
        a -= 2000;
        b = a*.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }else if(a >= 3000.01 && a <= 4500){
        a -= 3000;
        b = a * .18 + 80;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }else{
        a -= 4500;
        b = a * .28+350;
        cout<<fixed<<setprecision(2)<<"R$ "<<b<<endl;
    }
    return 0;
}