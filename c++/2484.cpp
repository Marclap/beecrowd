#include <bits/stdc++.h>

using namespace std;

int main() {
	string palabra="";
	while((getline(cin, palabra))) {
		int con=0;
		for(int i=0; i<palabra.size(); i++) {
			for(int j=0; j<con; j++)
				cout<<" ";
			for(int j=0; j<palabra.size()-con; j++) {
				cout<<palabra[j];
				if(j<(palabra.size()-con-1))
					cout<<" ";
			}
			con++;
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}