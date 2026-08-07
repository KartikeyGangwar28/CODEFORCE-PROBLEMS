#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//optimise it later
int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>>v(n,vector<int>(2));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>v[i][j];
    //     }
    // }
    // int ans=INT_MIN;
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<1;j++){
    //          sum+=v[i][j+1]-v[i][j];
    //     }
    //     ans=max(sum,ans);
    // }
    // cout<<ans;
    int n;
    cin>>n;
    int ans=INT_MIN,sum=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        sum+=b-a;
        ans=max(ans,sum);
    }
    cout<<ans;
}