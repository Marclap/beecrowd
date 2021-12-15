#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b) {
    return a.size() <= b.size();
}

void verificar(string cadena) {
    vector<string> palabras(51);
    int tam = cadena.size(), i = 0, j = 0, x = 0;
    string s;
    while(i <= tam) {
        if(cadena[i] == ' ' || cadena[i] == '\0') {
            s = cadena.substr(j, i - j);
            palabras[x] = s;
            x++;
            j = i + 1;
        }
        i++;
    }
    stable_sort(palabras.begin(), palabras.end(), compare);
    reverse(palabras.begin(), palabras.end());
    for(int i = 0; i < x; i++) {
        cout<<palabras[i];
        if(i < x - 1)
            cout<<" ";
    }
    cout<<endl;
}

int main(){
    int casos;
    string cadena;
    cin>>casos;cin.ignore();
    while(casos--) {
        getline(cin, cadena);
        verificar(cadena);
    }
    return 0;
}