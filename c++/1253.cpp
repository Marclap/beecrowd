#include <bits/stdc++.h>

using namespace std;

int main() {
	int casos;
	cin>>casos;
	while(casos--) {
		string palabra;
		int saltos;
		cin>>palabra>>saltos;
		for(int i = 0; i < palabra.size(); i++) {
			int sal = palabra[i] - saltos;
			if(sal < 65)
				sal += 26;
			char letra = sal;
			cout<<letra;
		}
		cout<<endl;
	}
    return 0;
}