#include <bits/stdc++.h>

using namespace std;

int main() {
	while(true) {
		int a, b, c, d, minutos1 = 0, minutos2 = 0;
		cin>>a>>b>>c>>d;
		if(a == 0 && b == 0 && c == 0 && d == 0) {
			break;
		}
		a *= 60;
		c *= 60;
		minutos1 = a + b;
		minutos2 = c + d;
		if(minutos2 < minutos1) {
			minutos2 += 1440;
		}
		cout<<(minutos2 - minutos1)<<endl;
	}
}