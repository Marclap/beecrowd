#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int> > g, vector<bool> &v, int u) {
    v[u] = true;
    for(int i = 0; i < g[u].size(); i++)
        if(!v[g[u][i]])
            bfs(g, v, g[u][i]);
}

int main(){
    int nodos, caminos;
    cin>>nodos>>caminos;
    vector<vector<int> > grafo(nodos);
    vector<string> hola;
    vector<bool> verificar(nodos, false);
    for(int i = 0; i < caminos; i++) {
        string a, c, d;
        pair<int, bool> b = {-1, false}, e = {-1, false};
        cin>>a>>c>>d;
        for(int i = 0; i < hola.size(); i++)
            if(hola[i] == a)
                b = {i, true};
        if(b.second == false) {
            hola.push_back(a);
            b = {hola.size() - 1, true};
        }
        for(int i = 0; i < hola.size(); i++) 
            if(hola[i] == d)
                e = {i, true};
        if(e.second == false) {
            hola.push_back(d);
            e = {hola.size() - 1, true};
        }
        grafo[b.first].push_back(e.first);
        grafo[e.first].push_back(b.first);
    }
    int con = 0;
    for(int i = 0; i < nodos; i++) {
        if(!verificar[i]) {
            con++;
            bfs(grafo, verificar, i);
        }
    }
    cout<<con<<endl;
}