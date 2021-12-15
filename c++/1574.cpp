#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    string b;
    cin>>casos;
    while(casos--) {
        int movimientos, pos = 0;
        cin>>movimientos;
        deque<int> a;
        for(int i = 0; i < movimientos; i++) {
            cin>>b;
            if(b == "LEFT")
                a.push_back(-1);
            else if(b == "RIGHT")
                a.push_back(1);
            else{
                int m;
                cin>>b>>m;
                a.push_back(a[m - 1]);
            }
        }
        for(int i = 0; i < a.size(); i++)
            pos += a[i];
        cout<<pos<<endl;
    }
    return 0;
}