#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(5,vector<int> (5,0));
    int x=0,y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j] == 1){
                x=i;
                y=j;
            }
        }
    }

    int ans = 0;
    ans = abs(2-x) + abs(2-y);
    cout<<ans<<endl;

    return 0;
}
