#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<int>nums(10,0);
    int peak=1,valley=1;
        for(int i=1;i<nums.size();i++){
            int diff=nums[i]-nums[i-1];
            if(diff<0){
                valley=peak+1;
            }
            else if(diff>0){
                peak=valley+1;
            }
        }
        return max(peak,valley);
    // int t;
    // cin >> t;
    // while(t--){
    //     long long int N,K;
    //     cin >> N >> K;
    //     //vector<vector<int>> map(N,vector<int>(N));
    //     //vector<vector<bool>> visitinfo(N,vector<bool>(N,false))
    //     if(K==1){
    //     if(N%2==0){
    //         cout<<"Even"<<endl;
    //     }
    //     else{
    //         cout<<"Odd"<<endl;
    //     }
    //     }
    //     else if(K==2){
    //         cout<<"Odd"<<endl;
    //     }
    //     else{
    //         cout<<"Even"<<endl;
    //     }

    // }
    return 0;
}