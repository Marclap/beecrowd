#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, c;
    while(cin>>a>>c && (a != 0 || c != 0)) {
        int bloques = 0;
        vector<int> b(c + 1);
        b[c] = a;
        for(int i = 0; i < c; i++)
            cin>>b[i];
        for(int i = 0; i < c; i++)
            if(b[i + 1] > b[i])
                bloques += (b[i + 1] - b[i]);
        cout<<bloques<<endl;
    }
    return 0;
}