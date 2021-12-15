#include<bits/stdc++.h>

using namespace std;

int main() {
    int casos;
    cin>>casos;
    while(casos--) {
        int m, res = 0;
        cin>>m;
        vector<pair<int, int> > p(m);
        for(int i = 0; i < m; i++) {
            cin>>p[i].first;
            p[i].second = i;
        }
        sort(p.rbegin(), p.rend());
        for(int i = 0; i < m; i++)
            res += (p[i].second == i);
        cout<<res<<endl;
    }
    return 0;
}