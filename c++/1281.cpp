#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin>>n;
    while(n--) {
        map<string, float> a;
        float res = 0;
        int p;
        cin>>p;
        for(int i = 0; i< p; i++) {
            string tmp;
            float tmpf;
            cin>>tmp>>tmpf;
            a[tmp] = tmpf;
        }
        cin>>p;
        for(int i = 0; i < p; i++) {
            string tmp;
            int canti;
            cin>>tmp>>canti;
            res += (a[tmp] * canti);
        }
        cout<<fixed<<setprecision(2)<<"R$ "<<res<<endl;
    }
    return 0;
}