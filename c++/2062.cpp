#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, i = 0;
    cin>>casos;
    vector<string> pal(casos);
    while(cin>>pal[i++] && i < casos);
    for(int j = 0; j < casos; j++) {
        if(pal[j].size() == 3) {
            if(pal[j].substr(0, 2) == "OB" || pal[j].substr(0, 2) == "UR")
                pal[j][2] = 'I';
            cout<<pal[j];
        } else
            cout<<pal[j];
        if(j != pal.size() - 1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}