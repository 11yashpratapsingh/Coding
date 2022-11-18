#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10];
    for(int i=0;i<5;i++) cin>>arr[i];

    int sm = 0;
    for(int i=0;i<5;i++) sm += arr[i];

    cout<<sm<<endl;

    return 0;
}