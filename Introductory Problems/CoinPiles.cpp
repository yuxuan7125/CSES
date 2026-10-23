#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(a<b) swap(a,b);
        if((a+b)%3 || (a-b)>b){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}