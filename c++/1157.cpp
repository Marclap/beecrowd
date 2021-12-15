#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int num;
    cin>>num;
    cout<<"1"<<endl;
    for(long long int i = 2; (i * 2) <= num; i++)
        if(num % i == 0)
            printf("%lld\n", i);
    cout<<num<<endl;
    return 0;
}