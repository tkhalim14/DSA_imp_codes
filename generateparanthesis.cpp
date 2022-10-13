#include <bits/stdc++.h>
using namespace std;

vector<string> ans;
string s;
void recurr(int n,int l,int r){
    if(r>l){
        return;
    }
    if(l==n && r==n){
        ans.push_back(s);
    }
    if(l<n){
        s+="(";
        recurr(n,l+1,r);
        s.pop_back();
    }
    if(r<n){
        s+=")";
        recurr(n,l,r+1);
        s.pop_back();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n=2;
    recurr(n,0,0);
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}