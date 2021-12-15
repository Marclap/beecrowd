#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int casos;
    string pal;
    cin>>casos;
    cin.ignore();
    while(casos--) {
        getline(cin, pal);
        string impri = "";
        for(int i = 0; i < pal.size(); i++) {
            if(pal[i] != ' ') {
                impri += pal[i];
                while(pal[i] != ' ' && i < pal.size())
                    i++;
            }
        }
        cout<<impri<<endl;
    }
    return 0;
}