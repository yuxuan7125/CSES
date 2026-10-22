#include<iostream>
using namespace std;
using ll = long long;

int main(){
    ll n;  cin>>n;
    const int k=1e9+7;
    ll ans=1;
    while(n--){
        ans=ans*2%k;
    }
    cout<<ans;
}