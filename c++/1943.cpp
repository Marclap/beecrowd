#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    if(a == 1) 
        cout<<"Top 1"<<endl;
    else if(a <= 3) 
        cout<<"Top 3"<<endl;
    else if(a <= 5) 
        cout<<"Top 5"<<endl;
    else if(a <= 10) 
        cout<<"Top 10"<<endl;
    else if(a <= 25) 
        cout<<"Top 25"<<endl;
    else if(a <= 50) 
        cout<<"Top 50"<<endl;
    else if(a <= 100) 
        cout<<"Top 100"<<endl;
    return 0;
}