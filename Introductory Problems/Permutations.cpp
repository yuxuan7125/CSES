#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    if(n==1){
        cout<<"1";
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==4){
        cout<<"2 4 1 3";
        return 0;
    }
    int i=1,j=(n+1)/2+1;
    bool b=true;
    for(int count=0;count<n;count++){
        if(b) {cout<<i++<<" "; b=false; }
        else {cout<<j++<<" "; b=true; }
    }
}