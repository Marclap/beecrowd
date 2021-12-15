#include <bits/stdc++.h>

using namespace std;

long long int con = 0;

long long int fibo(int n1){
	con++;
	if(n1 == 0 || n1 == 1){
		return n1;
	}
	return fibo(n1 - 1) + fibo(n1 - 2);
}

int main() {
	long long int casos;
	cin>>casos;
	while(casos--){
		int a;
		cin>>a;
		long long int fib = fibo(a);
		cout<<"fib("<<a<<") = "<<con - 1<<" calls = "<<fib<<endl;
		con = 0;
	}
    return 0;
}