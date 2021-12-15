#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> te(5);
    int a, i = 0, con = 0;
    cin>>a;
    while(scanf("%d", &te[i++]) && i < 5);
    for(i = 0; i < 5; i++)
        if(te[i] == a)
            con++;
    printf("%d\n", con);
    return 0;
}