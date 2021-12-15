#include <bits/stdc++.h>

using namespace std;

int main() {
    string palabra;
    while(getline(cin, palabra)) {
        bool a = true;
        for(int i = 0; i < palabra.size(); i++)
            if(palabra[i]==' ')
                cout<<palabra[i];
            else
                if(a) {
                    printf("%c", toupper(palabra[i]));
                    a = false;
                } else {
                    printf("%c", tolower(palabra[i]));
                    a = true;
                }
        cout<<endl;
    }
    return 0;
}