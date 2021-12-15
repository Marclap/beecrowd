#include <bits/stdc++.h>

using namespace std;

void combiner(string uno, string dos) {
    if(uno.size() < dos.size()) {
        for(int i = 0; i < uno.size(); i++)
            cout<<uno[i]<<dos[i];
        for(int i = uno.size(); i < dos.size(); i++)
            cout<<dos[i];
    } else if(dos.size() < uno.size()) {
        for(int i = 0; i < dos.size(); i++)
            cout<<uno[i]<<dos[i];
        for(int i = dos.size(); i < uno.size(); i++)
            cout<<uno[i];
    } else
        for(int i = 0; i < uno.size(); i++)
            cout<<uno[i]<<dos[i];
    cout<<endl;
}

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        string uno, dos;
        cin>>uno;
        cin.ignore();
        cin>>dos;
        combiner(uno, dos);
    }
    return 0;
}