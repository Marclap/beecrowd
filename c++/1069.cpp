#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos = 0;
    cin>>casos;
    while(casos--) {
        string line;
        int an = 0;
        cin>>line;
        stack<char> st;
        for(int i = 0; i < line.size(); i++) {
            if(line[i] == '.')
                continue;
            if(line[i] == '<')
                st.push(line[i]);
            if(line[i] == '>') {
                if(st.size() > 0) {
                    st.pop();
                    an++;
                }
            }
        }
        cout<<an<<endl;
    }
    return 0;
}