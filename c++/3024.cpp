#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, i = 0, con = 0;
    cin>>n>>x;
    vector<int> data(n);
    vector<int> res;
    while(cin>>data[i++] && i < n);
    for (i = 1; i < n; i++) {
        if ((data[i - 1] + x) >= data[i]) {
            if(con == 0)
                con++;
            con++;
        } else {
            res.push_back(con);
            con = 0;
        }
    }
    res.push_back(con);
    sort(res.begin(), res.end());
    int respuesta = res[res.size() - 1] == 0 ? 1 : res[res.size() - 1];
    cout<<respuesta<<endl;
    return 0;
}