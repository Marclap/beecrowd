#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> meses (13);
    int numero;
    cin>>numero;
    meses[1] = "January";
    meses[2] = "February";
    meses[3] = "March";
    meses[4] = "April";
    meses[5] = "May";
    meses[6] = "June";
    meses[7] = "July";
    meses[8] = "August";
    meses[9] = "September";
    meses[10] = "October";
    meses[11] = "November";
    meses[12] = "December";
    cout<<meses[numero]<<endl;
    return 0;
}