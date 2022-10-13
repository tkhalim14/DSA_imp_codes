#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //to get the priority acc to value in ratings , curr_val = 1 more than the next value then another loop for prev value.
    vector<int> ratings={-1,0,2,5,6,8,2,1,1,0};
    int n=ratings.size();
        vector<int> tally(n,1);
        for(int i=0;i<n-1;i++){
            if(ratings[i+1]>ratings[i]){
                tally[i+1]=tally[i]+1;
            }
        }
        int sum=0;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1] && tally[i]<=tally[i+1]){
                tally[i]=tally[i+1]+1;
            }
            sum+=tally[i];
        }
        sum+=tally[n-1];
        cout<<sum;
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