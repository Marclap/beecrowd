#include <bits/stdc++.h>

using namespace std;

struct medallas {
    string pais;
    int oro, plata, bronce;
};

bool comparasion(medallas a, medallas b) {
    if(a.oro == b.oro) {
        if(a.plata == b.plata) {
            if(a.bronce == b.bronce)
                return a.pais < b.pais;
            return a.bronce > b.bronce;
        }
        return a.plata > b.plata;
    }
    return a.oro > b.oro;
}

int main() {
    int casos;
    cin>>casos;
    vector<medallas> med(casos);
    for(int i = 0; i < casos; i++)
        cin>>med[i].pais>>med[i].oro>>med[i].plata>>med[i].bronce;
    sort(med.begin(), med.end(), comparasion);
    for(int i = 0; i < casos; i++)
        cout<<med[i].pais<<" "<<med[i].oro<<" "<<med[i].plata<<" "<<med[i].bronce<<endl;
    return 0;
}