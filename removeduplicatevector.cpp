#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<int> nums={0,0,1,2,2,4,1,6};
    vector<int>::iterator ip;
    ip = std::unique(nums.begin(), nums.end());
    nums.resize(std::distance(nums.begin(), ip));
    for(auto x:nums){
        cout<<x<<endl;
    }
    return 0;
}