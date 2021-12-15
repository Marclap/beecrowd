#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int a, b, men, may, sum = 0;
    cin>>a>>b;
    if(a > b) {
        men = b;
        may = a;
    } else {
        men = a;
        may = b;
    }
    for(int i = men + 1; i < may; i++) {
        if(i % 2 == 1 || i % 2 == -1)
            sum += i;
    }
    cout<<sum<<endl;
}