#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int first = true;
    while(cin>>a && a) {
        vector<string> palabras(a);
        int max = 0;
        for(int i = 0; i < a; i++) {
            cin>>palabras[i];
            if(max < palabras[i].size())
                max = palabras[i].size();
        }
        if (!first)
            cout << endl;
        for(int i = 0; i < a; i++)
            cout<<setw(max)<<palabras[i]<<endl;
        first = false;
    }
    return 0;
}