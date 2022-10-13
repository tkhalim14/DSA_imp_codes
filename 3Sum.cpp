// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
//     // We are given a vector , using it we have to find sets of triplets such that the sum = 0 s.t. all pair wise indices aren't the same.
//     // Since it is a set , it should be unique.
//     // Brute force approach would be 3 nested for loops running from 0 to nums.size()
//     // Second approach would be using the two pointers approach.
//     // sort the vector in ascending order so that we can classify the sum<0 , sum == 0 and sum>0 cases needed later.
//     // the first for loop for i , would be the same, now we should see for j and k.
//     // we can set j = i+1 and k = size()-1 and start a new while loop(j<k) to check if sum==0.
//     // if sum==0 , and i,j,k in the set and then ++j , --k.
//     // if sum<0 , then j+=1.
//     // if sum>0 , then k-=1.
//     // On top of all this, we will most likely get some duplicate data, in order to avoid duplicates
//     // we skip those duplicates by checking the values corresp. to the indices are not reappearing in the loop
//     // Code :
//     vector<int> m = {1,2,3,4,-1,5,6,-2,7,0,-2,-3,-4,-5,-6,-7,899,28,4};
//     sort(m.begin(), m.end());
//     vector<vector<int>>set;
//     //target sum is 0
//     int n = m.size();
//     for(int i=0;i<n;i++){
//         if(i>0 && m[i]==m[i-1]){
//             continue;
//         }
//         int j=i+1;
//         int k=n-1;
//         while(j<k){
//             int sum=m[i]+m[j]+m[k];
//             if(sum==0){
//                 set.push_back({m[i],m[j],m[k]});
//                 ++j;
//                 --k;
//                 while(j<k && m[j]==m[j-1]){
//                     ++j;
//                 }
//                 while(j<k && m[k]==m[k+1]){
//                     --k;
//                 }
//             }
//             else if(sum<0){
//                 ++j;
//             }
//             else if(sum>0){
//                 --k;
//             }
//         }
//     }
//     for(int i=0; i<set.size(); ++i){
//         for(int j=0; j<3; ++j){
//             cout<<set[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
static bool compare( int a,  int b){
    return a>b;
}
int main(){
    vector<int>v;
    for(int i =0; i<5; i++){
        v.push_back(i);
    }
    sort(v.begin(), v.end(), compare);
    return 0;
}