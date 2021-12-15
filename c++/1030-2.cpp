//recursivity
#include <bits/stdc++.h>

using namespace std;

int def(int n, int k){
    if(n == 1) return 1;
    return (def(n - 1, k) + k - 1) % n + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos, con = 0;
    cin>>casos;
    while(casos--){
        int n, k;
        cin>>n>>k;
        int x = def(n, k);
        con++;
        cout<<"Case "<<con<<": "<<x<<endl;
    }
}