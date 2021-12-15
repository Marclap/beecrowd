#include <bits/stdc++.h>
#define lli long long int
#define forme(x) for(int i = 0; i < x; i++)

using namespace std;

int main(){
    int n, t, l, tmp, a = 0;
    cin>>n>>t>>l;
    vector<int> fin(2, 0);
    forme(n - 1) {
        cin>>tmp;
        if(abs(t - tmp) <= l) {
            fin[i & 1] += abs(t - tmp);
            t = tmp;
        }
    }
    cout<<fin[0]<<" "<<fin[1]<<endl;
    return 0;
}