#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin>>n) {
        int aux = 1, con = 0;
        while(aux <= n) {
            for(int i = 0; i < ((n / 2) - con); i++)
                cout<<" ";
            for(int i = 0; i < aux; i++)
                cout<<"*";
            con++;
            aux += 2;
            cout<<endl;
        }
        int j = 2;
        aux = 1, con = 0;
        while(j--) {
            for(int i = 0; i < ((n / 2) - con); i++)
                cout<<" ";
            for(int i = 0; i < aux; i++)
                cout<<"*";
            con++;
            aux += 2;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}