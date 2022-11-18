#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int> ans(n);
        func(ans,v,n);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }

        cout<<endl;
    }
    return 0;
}