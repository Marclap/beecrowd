#include <bits/stdc++.h>

using namespace std;

int main() {
    int casos, pos = 1, val;
    cin>>casos;
    vector<int> a(casos);
    for(int i = 0; i < casos; i++)
        cin>>a[i];
    val = a[0];
    for(int i = 0; i < casos; i++)
        if(val > a[i]) {
            pos = i + 1;
            val = a[i];
        }
    cout<<pos<<endl;
    return 0;
}