#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a == c && b == d)
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    else{
        int min1 = (a * 60) + b, min2 = (c * 60) + d, res;
        if(min2 < min1)
            min2 += 1440;
        res = min2 - min1;
        cout<<"O JOGO DUROU "<<res / 60<<" HORA(S) E "<<res % 60<<" MINUTO(S)"<<endl;
    }
    return 0;
}