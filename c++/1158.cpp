#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int casos;
    cin>>casos;
    while(casos--) {
        long long int x, y, con = 0, sum = 0;
        cin>>x>>y;
        if(x % 2 == 0)
            x++;
        for(int i = x;; i+=2) {
            sum+=i;
            con++;
            if(con == y)
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}