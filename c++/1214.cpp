#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int tama;
        cin>>tama;
        vector<float> notas(tama);
        float promedio = 0, con = 0;
        for(int i = 0; i < tama; i++) {
            cin>>notas[i];
            promedio += notas[i];
        }
        promedio /= tama;
        for(int i = 0; i < tama; i++)
            if(notas[i] > promedio)
                con++;
        cout<<fixed<<setprecision(3)<<(con / tama) * 100<<"%"<<endl;
    }
    return 0;
}