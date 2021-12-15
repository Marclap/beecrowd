#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int x, y, men, may, sum = 0;
    cin>>x>>y;
    if(x > y) {
        men = y;
        may = x;
    } else {
        men = x;
        may = y;
    }
    for(long long int i = men; i <= may; i++)
        if(i % 13 != 0) sum += i;
    cout<<sum<<endl;
    return 0;
}