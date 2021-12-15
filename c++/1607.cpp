#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        string a, b;
        cin>>a>>b;
        if(a == b)
            cout<<"0"<<endl;
        else{
            long long int con = 0;
            for(int i = 0; i < a.size(); i++) {
                int letras = b[i] - a[i];
                if(letras < 0)
                    letras += 26;
                con += letras;
            }
            cout<<con<<endl;
        }
    }
    return 0;
}