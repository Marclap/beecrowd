#include <bits/stdc++.h>

using namespace std;

int main() {
    string putos;
    cin>>putos;
    for(int i = 0; i < putos.size(); i++) {
        if(putos[i] == '.' || putos[i] == '-') {
            cout<<endl;
            continue;
        }
        cout<<putos[i];
    }
    cout<<endl;
    return 0;
}