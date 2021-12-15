#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    char data[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    cin>>a>>b;
    map<char, int> x;
    for(int i = 0; i < a.length(); i++)
        x[a[i]] = i;
    for(int i = 0; i < b.length(); i++)
        cout<<data[x[b[i]]];
    cout<<endl;
    return 0;
}