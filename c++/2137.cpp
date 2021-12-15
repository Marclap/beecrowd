#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	while(cin>>a){
		vector<string> libros(a);
		for(int i = 0; i < a; i++)
			cin>>libros[i];
		sort(libros.begin(), libros.end());
		for(int i = 0; i < a; i++)
			cout<<libros[i]<<endl;
	}
	return 0;
}