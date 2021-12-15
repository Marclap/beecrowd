#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int num;
    cin>>num;
    string mun = static_cast<ostringstream*>(&(ostringstream()<<num))->str();
    reverse(mun.begin(), mun.end());
    cout<<mun<<endl;
    return 0;
}