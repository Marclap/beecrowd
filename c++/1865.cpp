#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos;
    cin>>casos;
    while(casos--) {
        string nombre;
        int poder;
        cin>>nombre>>poder;
        if(nombre == "Thor")
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}