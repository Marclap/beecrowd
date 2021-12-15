#include <bits/stdc++.h>

using namespace std;

int main() {
    string alfabeto;
    while((cin>>alfabeto)) {
        int num, letra;
        cin>>num;
        for(int i = 0; i < num; i++) {
            cin>>letra;
            cout<<alfabeto[letra - 1];
        }
        cout<<endl;
    }
    return 0;
}