#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    long long d,  h  , m,  s, dd, hh, mm, ss;
    cin>>a>>d>>h>>a>>m>>a>>s;
    cin>>a>>dd>>hh>>a>>mm>>a>>ss;
    long long ans = (dd - d) * 86400 + (hh - h) * 3600 + (mm - m) * 60 + (ss - s);
    cout<<ans / 86400<<" dia(s)"<<endl;
    ans %= 86400;
    cout<<ans / 3600<<" hora(s)"<<endl;
    ans %= 3600;
    cout<<ans / 60<<" minuto(s)"<<endl;
    ans %= 60;
    cout<<ans<<" segundo(s)"<<endl;
    return 0;
}