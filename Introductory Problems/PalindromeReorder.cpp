#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;  cin>>s;
    const int n=s.size();
    vector<int> count(26,0);
    for(int i=0;i<n;i++){
        count[int(s[i]-'A')]++;
    }
    string ans="";
    bool mid;
    if(n%2) mid=true;
    else mid=false;
    char mid_char=0;
    for(int i=0;i<26;i++){
        while(count[i]){
            if(count[i]==1){
                if(mid){
                    mid=false;
                    mid_char='A'+i;
                    break;
                }
                else{
                    cout<<"NO SOLUTION";
                    return 0;
                }
            }
            char c='A'+i;
            ans+=c;
            count[i]-=2;
        }
    }
    cout<<ans;
    if(mid_char) cout<<mid_char;
    reverse(ans.begin(), ans.end());
    cout<<ans;
}