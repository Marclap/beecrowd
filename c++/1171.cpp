#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a=0, ord=0;
    cin>>a;
    vector<int> rep(2001, 0);
    for(int i = 0; i < a; i++) {
        cin>>ord;
        rep[ord]++;
    }
    for(int i = 0; i < 2001; i++)
        if(rep[i] != 0)
            cout<<i<<" aparece "<<rep[i]<<" vez(es)"<<endl;
    return 0;
}