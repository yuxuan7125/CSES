#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    char last=s[0];
    int ans=1;
    int count=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==last) ans=max(ans, ++count+1);
        else count=0;
        last=s[i];
    }
    cout<<ans;
}