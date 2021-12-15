#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	double x[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
	printf("Total: R$ %.2f\n", (x[a - 1] * b));
	return 0;
}