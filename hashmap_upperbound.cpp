#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    vector<vector<int>> map(26);
    string s="mehowjonwg";
    vector<string> words;//={"mg",'wgr','wgrw',"mhojg"};
        int n=s.size();
        for(int i=0;i<n;i++){
            map[s[i]-'a'].push_back(i);
        }
        int count=words.size();
        for(auto& word:words){
            int last=-1;
            for(auto& k: word){
                auto index = map[k-'a'];
                auto it = upper_bound(index.begin(),index.end(),last);
                if(it==index.end()){
                    count--;
                    break;
                }
                else{
                    last=*it;
                }
            }
        }
    cout<< count;
    return 0;
}