#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    bool x = false;
    while(n--) {
        if(x)
            cout<<endl;
        else
            x = true;
        int a, b;
        cin>>a>>b;
        vector<int> c(b);
        for(int i = 0; i < b; i++)
            cin>>c[i];
        for(int i = 0; i < a; i++) {
            cout<<i<<" -> ";
            for(int j = 0; j < b; j++) {
                if(c[j] % a == i)
                    cout<<c[j]<<" -> ";
            }
            cout<<"\\"<<endl;
        }
    }
    return 0;
}