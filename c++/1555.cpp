#include <bits/stdc++.h>
using namespace std;
int main() {
	int casos=0;
	cin>>casos;
	while(casos--) {
		int x, y, rafa, beto, carlos;
		cin>>x>>y;
		rafa = pow((3 * x), 2) + pow(y , 2);
		beto = (2 * pow(x, 2)) + (pow(5 * y, 2));
		carlos = (-100 * x) + pow(y, 3);
		if(rafa > beto && rafa > carlos)
			cout<<"Rafael ganhou"<<endl;
		else if(beto > rafa && beto > carlos)
			cout<<"Beto ganhou"<<endl;
		else if(carlos > rafa && carlos > beto)
			cout<<"Carlos ganhou"<<endl;
	}
	return 0;
}