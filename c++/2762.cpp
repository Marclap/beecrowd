#include <bits/stdc++.h>

using namespace std;

int main(){
    string pal, d, e;
    int a, b, c;
    cin>>pal;
    for(int i = 0; i < pal.size(); i++)
        if(pal[i] == '.')
            a = i;
    d = pal.substr(0, a);
    e = pal.substr(a + 1, pal.size());
    b = atoi(d.c_str());
    c = atoi(e.c_str());
    cout<<c<<"."<<b<<endl;
    return 0;
}