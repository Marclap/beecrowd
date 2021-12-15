#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int anos;
        cin>>anos;
        anos-=2015;
        if(anos < 0)
            cout<<abs(anos)<<" D.C."<<endl;
        else
            cout<<anos + 1<<" A.C."<<endl;
    }
    return 0;
}