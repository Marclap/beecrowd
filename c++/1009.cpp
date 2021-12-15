#include <bits/stdc++.h>

using namespace std;

int main(){
	float a, b;
	string nom;
	fflush(stdin);
	getline(cin, nom);
	cin>>a>>b;
	printf("TOTAL = R$ %.2f\n", (a + (b * 0.15)));
	return 0;
}