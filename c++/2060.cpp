#include <bits/stdc++.h>

using namespace std;

int main(){
    int pos, dos = 0, tres = 0, cuatro = 0, cinco = 0;
    cin>>pos;
    while(pos--) {
        int val;
        cin>>val;
        if(val % 2 == 0)
            dos++;
        if(val % 3 == 0)
            tres++;
        if(val % 4 == 0)
            cuatro++;
        if(val % 5 == 0)
            cinco++;
    }
    cout<<dos<<" Multiplo(s) de 2"<<endl;
    cout<<tres<<" Multiplo(s) de 3"<<endl;
    cout<<cuatro<<" Multiplo(s) de 4"<<endl;
    cout<<cinco<<" Multiplo(s) de 5"<<endl;
    return 0;
}