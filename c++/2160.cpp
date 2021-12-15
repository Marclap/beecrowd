#include <bits/stdc++.h>

using namespace std;
 
int main() { 
    string a;
    getline(cin, a);
    int len = a.length();
    if(len <= 80)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}