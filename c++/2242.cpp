#include <bits/stdc++.h>

using namespace std;

int main(){
    string risa;
    deque<char> vocal;
    bool im = true;
    cin>>risa;
    for(int i = 0; i < risa.size(); i++)
        if(risa[i] == 'a' || risa[i] == 'e' || risa[i] == 'i' || risa[i] == 'o' || risa[i] == 'u')
            vocal.push_back(risa[i]);
    for(int i = 0, j = vocal.size() - 1; i < vocal.size(); i++, j--)
        if(vocal[i] != vocal[j]){
            im = false;
            break;
        }
    printf(im ? "S" : "N");
    cout<<endl;
    return 0;
}