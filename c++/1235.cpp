#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    string pal;
    cin>>casos;
    cin.ignore();
    while(casos--) {
        getline(cin, pal);
        int mitad = pal.size() / 2;
        for(int i = mitad - 1; i >= 0; i--)
            cout<<pal[i];
        for(int i = pal.size() - 1; i >= mitad; i--)
            cout<<pal[i];
        cout<<endl;
    }
    return 0;
}