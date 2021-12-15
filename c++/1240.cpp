#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a, b;
	int casos;
	cin>>casos;
	while(casos--) {
		int dig = 0;
		cin>>a>>b;
		a -= b;
		while(b > 0) {
			b/=10;
			dig++;
		}
		dig = pow(10, dig);
		if(a % dig == 0)
			cout<<"encaixa"<<endl;
		else
			cout<<"nao encaixa"<<endl;
	}
	return 0;
}