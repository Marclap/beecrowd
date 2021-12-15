#include <bits/stdc++.h>

using namespace std;

vector<int> x(40, 0);

void fibo() {
    x[0] = 1;
    x[1] = 2;
    for(int i = 2; i < 40; i++){
        x[i] = x[i - 1] + x[i - 2];
    }
}

int main() {
    int a;
    fibo();
    while(cin>>a && a)
        cout<<x[a - 1]<<endl;
}