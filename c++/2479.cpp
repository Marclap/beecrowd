#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, con = 0;
    char buenos;
    scanf("%d", &casos);
    vector<string> ninos(casos);
    for(int i = 0; i < casos; i++) {
        cin>>buenos>>ninos[i];
        if(buenos == '+')
            con++;
    }
    sort(ninos.begin(), ninos.end());
    for(int i = 0; i < casos; i++)
        cout<<ninos[i]<<endl;
    cout<<"Se comportaram: "<<con<<" | Nao se comportaram: "<<(casos - con)<<endl;
    return 0;
}