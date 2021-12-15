#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin>>n;
	set<string> salida;
	for(int i = 0; i < n; i++) {
		string f;
		cin>>f;
		bool arroba = true, plus = true;
		string aux = "";
		for(int i = 0; i < f.length(); i++) {
			char c = f[i];
			if(arroba &&  c == '@') {
				arroba = false;
				plus = true;
			} 
			if(arroba && c == '.') continue;
			if(!plus) continue;
			if(arroba && c == '+') {
				plus = false;
				continue;
			}
			aux += f[i];
		}
		salida.insert(aux);
	}
	cout<<salida.size()<<"\n";
	return 0;
}