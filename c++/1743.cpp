#include <bits/stdc++.h>

using namespace std;

bool comparar(vector<int> a, vector<int> b) {
    for(int i = 0; i < 5; i++){
        if(a[i] != b[i])
            continue;
        return false;
    }
    return true;
}

int main() {
    vector<int> a(5);
    vector<int> b(5);
    for(int i = 0; i < 5; i++)
        cin>>a[i];
    for(int i = 0; i < 5; i++)
        cin>>b[i];
    if(comparar(a, b))
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}