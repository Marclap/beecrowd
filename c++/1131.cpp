#include <bits/stdc++.h>

using namespace std;

int main() {
    int inter, gremio, ginter = 0, ggremio = 0, empates = 0, partidos = 0, seguir;
    while(true){
        cin>>inter>>gremio;
        if(inter > gremio)
            ginter++;
        else if(gremio > inter)
            ggremio++;
        else
            empates++;
        partidos++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>seguir;
        if(seguir == 2)
            break;
    }
    cout<<partidos<<" grenais"<<endl;
    cout<<"Inter:"<<ginter<<endl;
    cout<<"Gremio:"<<ggremio<<endl;
    cout<<"Empates:"<<empates<<endl;
    if(ginter > ggremio)
        cout<<"Inter venceu mais"<<endl;
    else if(ggremio > ginter)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Nao houve vencedor"<<endl;
    return 0;
}