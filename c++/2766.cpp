#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> names(10);
    int i = 0;
    while(cin>>names[i++] && i < 10);
    cout<<names[2]<<endl<<names[6]<<endl<<names[8]<<endl;
    return 0;
}