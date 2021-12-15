#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(d) {
        if(e)
            cout<<"Jogador 2 ganha!"<<endl;
        else
            cout<<"Jogador 1 ganha!"<<endl;
    } else {
        if(e)
            cout<<"Jogador 1 ganha!"<<endl;
        else{
            int sum = c + b;
            int r;
            if(sum % 2)
                r = 0;
            else
                r = 1;
            if(r == a)
                cout<<"Jogador 1 ganha!"<<endl;
            else
                cout<<"Jogador 2 ganha!"<<endl;
        }
    }
    return 0;
}