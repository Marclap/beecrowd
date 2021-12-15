#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    vector<int> fibo(46);
    cin>>num;
    for(int i = 0; i < num; i++) {
        if(i == 0 || i == 1) {
            cout<< i;
            fibo[i] = i;
        } else {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
            cout<<fibo[i];
        }
        if(i != (num - 1))
            cout<<" ";
    }
    cout<<endl;
    return 0;
}