#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, caso = 1, val;
    while(scanf("%d%d", &n, &q) && (n + q)){
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        vector<int> b(10010, -1);
        for(int i = n - 1; i >= 0; i--)
            b[a[i]] = i + 1;
        cout<<"CASE# "<<caso++<<":"<<endl;
        while(q-- && scanf("%d", &val))
            if(b[val] == -1)
                cout<<val<<" not found"<<endl;
            else
                cout<<val<<" found at "<<b[val]<<endl;
    }
    return 0;
}