#include <bits/stdc++.h>
using namespace std;

void func(vector<int>& ans, vector<int>& v, int n){
    int cream = 0;
    for(int i=n-1;i>=0;i--){
        if(v[i]>cream) cream = v[i];
        if(cream>0){
            ans[i] = 1;
            cream--;
        }
        else ans[i] = 0;
    }
}

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