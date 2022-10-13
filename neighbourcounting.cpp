#include <bits/stdc++.h>
#include<sstream>
using namespace std;

int count_neighbors(vector<string>& v,int index){
    if(index==v.size()-1){
        return 1;
    }
    if(v[index]==v[index+1]){
        return count_neighbors(v,index+1);
    }
    else{
        return 1+count_neighbors(v,index+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> v;
    while(n--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    cout<<count_neighbors(v,0);
    return 0;
}