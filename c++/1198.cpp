#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int a, b, c;
	while(cin>>a>>b){
        c = a - b;
        if(c < 0)
            c *= -1;
        cout<<c<<endl;
	}
	return 0;
}