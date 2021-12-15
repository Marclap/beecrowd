#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    scanf("%d", &casos);
    while(casos--){
        int n1, d1, n2, d2, n3, d3;
        string op, div;
        cin>>n1>>div>>d1>>op>>n2>>div>>d2;
        if(op == "+"){
            n3 = n1 * d2 + n2 * d1;
            d3 = d1 * d2;
        }else if(op == "-"){
            n3 = n1 * d2 - n2 * d1;
            d3 = d1 * d2;
        }else if(op == "*"){
            n3 = n1 * n2;
            d3 = d1 * d2;
        }else{
            n3 = n1 * d2;
            d3 = n2 * d1;
        }
        cout<<n3<<"/"<<d3<<" = ";
        int t = abs(n3), r = abs(d3);
        while(t != 0 && r != 0)
            if(t >= r)
                t %= r;
            else
                r %= t;
        int y = (t + r);
        cout<<n3 / y <<"/"<<d3 / y<<endl;
    }
    return 0;
}