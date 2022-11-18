#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1 && k == 1) cout<<"YES"<<endl;

        if(n==2 && k==2) cout<<"NO"<<endl;
        
        if(n%k == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}