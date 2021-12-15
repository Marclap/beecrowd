#include <bits/stdc++.h>

using namespace std;

int main() {
    string pal;
    deque<string> nums;
    getline(cin, pal);
    while(pal.size()) {
        nums.push_back(pal.substr(0, 2));
        pal.erase(0, 3);
    }
    cout<<nums[1]<<"/"<<nums[0]<<"/"<<nums[2]<<endl;
    cout<<nums[2]<<"/"<<nums[1]<<"/"<<nums[0]<<endl;
    cout<<nums[0]<<"-"<<nums[1]<<"-"<<nums[2]<<endl;
    return 0;
}