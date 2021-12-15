#include <bits/stdc++.h>

using namespace std;

int main(){
	float cod1, ud1, val1, cod2, ud2, val2;
	cin>>cod1>>ud1>>val1;
	cin>>cod2>>ud2>>val2;
	printf("VALOR A PAGAR: R$ %.2f\n", ((ud1 * val1) + (ud2 * val2)));
}