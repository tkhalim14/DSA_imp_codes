#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // 22/9/22 ->
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        string ans="";
        for(int i=len-3;i>=0;i-=1){
            string sub = s.substr(i,3);
            string part="";
            char a=sub[0];
            char b=sub[1];
            char c=sub[2];
            if(c=='0'){
                part=part+char((int(a)-48)*10+int(b)-48+96);
                cout<<part<<endl;
            }
            else{
                char a1=char(int(a)-48+96);
                char b1=char(int(b)-48+96);
                if(a1=='`'){
                    if(b1=='`'){
                        part=part+char(int(c)-48+96);
                    }
                    else{
                        part=part+b1+char(int(c)-48+96);
                    }
                }
                else{
                    if(b1=='`'){
                        part=part+a1+char(int(c)-48+96);
                    }
                    else{
                        part=part+a1+b1+char(int(c)-48+96);
                    }
                }
                cout<<part<<endl;
            }
            ans=part+ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}