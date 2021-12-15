#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a, con = 0;
    for(int i = 0; i < 5; i++){
        cin>>a;
        if(a % 2 == 0){
            con++;
        }
    }
    cout<<con<<" valores pares"<<endl; 
    return 0;
}