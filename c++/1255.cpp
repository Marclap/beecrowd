#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    string pal;
    cin>>casos;
    cin.ignore();
    while(casos--) {
        getline(cin, pal);
        vector<int> frecuencia(300);
        for(int i = 0; i < pal.size(); i++)
            if(isalpha(pal[i]))
                frecuencia[tolower(pal[i])]++;
        int masrepetido = *max_element(frecuencia.begin(), frecuencia.end());
        for(char i = 'a'; i <= 'z'; i++)
            if(frecuencia[i] == masrepetido)
                cout<<i;
        cout<<endl;
    }
    return 0;
}