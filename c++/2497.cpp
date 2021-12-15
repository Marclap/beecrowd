#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cases = 0;
    while(cin>>n && n!= -1) 
        cout<<"Experiment "<<++cases<<": "<<(int) (n / 2)<<" full cycle(s)"<<endl;
    return 0;
}