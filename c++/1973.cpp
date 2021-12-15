#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector<long long int> x(n);
    for(int i = 0; i < n; i++)
        cin>>x[i];
    int i = 0, sum = 0;
    set<long long int> noStolen;
    while(i >= 0 && i < n) {
        noStolen.insert(i);
        if(x[i] % 2 == 1) {
            if(x[i])
                x[i]--;
            i++;
        } else {
            if(x[i])
                x[i]--;
            i--;
        }
    }
    cout<<noStolen.size()<<" "<<accumulate(x.begin(), x.end(), 0LL)<<endl;
    return 0;
}