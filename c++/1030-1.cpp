//Brute force
#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, vivo, cs=0;
    cin>>casos;
    while(casos--) {
        cs++;
        int a, b, i = 0;
        cin>>a>>b;
        vector<bool>c(a, true);
        int disparo = b - 1, tempDisparo = disparo, conVi = a;
        while(conVi != 0) {
            if(i == c.size()) i = 0; 
            if(c[i] == true && tempDisparo == 0) {
                c[i] = false;
                tempDisparo = disparo;
                vivo = i;
                conVi--;
            }         
            if(c[i] == true && tempDisparo != 0) tempDisparo--;
            i++;
         }
         cout<<"Case "<<cs<<": "<<vivo+1<<endl;
    }
    return 0;
}