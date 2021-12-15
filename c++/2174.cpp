#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, i = 0;
    cin>>casos;
    set<string> pokemones;
    string pok;
    while(casos--) {
        cin>>pok;
        pokemones.insert(pok);
    }
    cout<<"Falta(m) "<<151 - pokemones.size()<<" pomekon(s)."<<endl;
    return 0;
}