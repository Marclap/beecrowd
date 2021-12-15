#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 39;
    while(a--)
        cout<<"-";
    cout<<endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 39; j++)
            if(j == 0 || j == 38)
                cout<<"|";
            else
                cout<<" ";
        cout<<endl;
    }
    a = 39;
    while(a--)
        cout<<"-";
    cout<<endl;
    return 0;
}