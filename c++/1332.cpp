#include <bits/stdc++.h>

using namespace std;

bool verificar(string a, string b) {
    int con = 0;
    for(int i = 0; i < b.size(); i++)
        if(a[i] == b[i])
            con++;
    return con >= 2;
}

int main(){
    int casos;
    cin>>casos;
    while(casos--) {
        string pal;
        cin>>pal;
        if(pal.size() == 5)
            cout<<"3"<<endl;
        else if(verificar("one", pal))
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }
    return 0;
}