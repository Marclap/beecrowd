#include <bits/stdc++.h>

using namespace std;

int main() {
	int casos;
	while(cin>>casos) {
		if(casos == 0)
			break;
		int datos[casos], mary = 0, jhon = 0;
		for(int i = 0; i < casos; i++) {
			cin>>datos[i];
			if(datos[i] == 1)
				jhon++;
			else
				mary++;
		}
		cout<<"Mary won "<<mary<<" times and John won "<<jhon<<" times"<<endl;
	}
}