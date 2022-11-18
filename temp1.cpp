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
        int m;
        cin>>m;
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            mp[a]++;
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])== mp.end()) ans.push_back(v[i]);
        }

        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}