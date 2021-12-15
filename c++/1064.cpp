#include <bits/stdc++.h>

using namespace std;

int main(){
	double num, sum = 0;
	int con = 0;
	for(int i = 0; i < 6; i++){
		cin>>num;
		if(num >= 0){
			sum += num;
			con++;
		}
	}
    cout<<con<<" valores positivos"<<endl;
    printf("%.1f\n", (sum / con));
	return 0;
}