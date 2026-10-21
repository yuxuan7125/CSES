#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    bitset<200001> b;
    b.reset();
    for(int i=1;i<=n-1;i++){
        int x; cin>>x;
        b[x]=1;
    }
    for(int i=1;i<=n;i++){
        if(!b[i]) cout<<i;
    }
}