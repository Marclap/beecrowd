#include<bits/stdc++.h>

using namespace std;

struct dioses {
    string nombre;
    int poder, diosesAsesinados, muertes;
};

bool comparator(dioses a, dioses b) {
    if(a.poder == b.poder){
        if(a.diosesAsesinados == b.diosesAsesinados) {
            if(a.muertes == b.muertes)
                return a.nombre > b.nombre;
            return a.muertes > b.muertes;
        }
        return a.diosesAsesinados < b.diosesAsesinados;
    }
    return a.poder < b.poder;
}

int main() {
    int n;
    cin>>n;
    vector<dioses> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i].nombre>>a[i].poder>>a[i].diosesAsesinados>>a[i].muertes;
    sort(a.begin(), a.end(), comparator);
    cout<<a[n - 1].nombre<<endl;
    return 0;
}