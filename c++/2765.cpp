#include <bits/stdc++.h>

using namespace std;

int main() {
    string pal;
    getline(cin, pal);
    for(int i = 0; i < pal.size(); i++)
        if(pal[i] == ',')
            cout<<endl;
        else
            cout<<pal[i];
    cout<<endl;
    return 0;
}