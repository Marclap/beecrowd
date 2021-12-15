#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    if(a%2 == 0 && b%2 == 0)
        return a < b;
    else {
        if(a %2!= 0 && b%2 != 0)
            return a > b;
        else if(a%2 != 0)
            return false;
        else
            return true;
    }
}

int main() {
    int tama;
    cin>>tama;
    vector<int> a(tama);
    for(int i = 0; i < tama; i++)
        cin>>a[i];
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < tama; i++)
        cout<<a[i]<<endl;
}