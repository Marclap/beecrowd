#include <bits/stdc++.h>

using namespace std;

void verificar(string cadena) {
    vector<string> palabras;
    int tam = cadena.size(), i = 0, j = 0, x = 0;
    string s;
    while(i <= tam) {
        if(cadena[i] == ' ' || cadena[i] == '\0') {
            s = cadena.substr(j, i - j);
            if(x >= 1) {
                bool ver = false;
                for(int i = 0; i < palabras.size(); i++)
                    if(palabras[i] == s) {
                        ver = true;
                        break;
                    }
                if(!ver)
                    palabras.push_back(s);
            } else
                palabras.push_back(s);
            j = i + 1;
            x++;
        }
        i++;
    }
    sort(palabras.begin(), palabras.end());
    for(int i = 0; i < palabras.size(); i++) {
        cout<<palabras[i];
        if(i < palabras.size() - 1)
            cout<<" ";
    }
    cout<<endl;
}

int main() {
    int casos;
    string cadena;
    cin>>casos;cin.ignore();
    while(casos--) {
        getline(cin, cadena);
        verificar(cadena);
    }
    return 0;
}