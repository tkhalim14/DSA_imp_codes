#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<vector<int>> m = {{2,1},{3,4},{5,6},{7,8}};
    sort(m.begin(), m.end(),[](auto& a,auto& b){
        return a[0]>b[0];
    });
    for(auto& a:m){
        cout<<a[0]<<" "<<a[1]<<endl;
    }
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