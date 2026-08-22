#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int ans=INT_MIN;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    if(n==1){
        cout<<max(abs(0-v[0]),2*abs(v[0]-x));
        continue;
    }
    int adj=abs(v[0]-v[1]);
    for(int i=1;i<n-1;i++){
       adj=max(adj,abs(v[i]-v[i+1]));
    }
    int jda=2*abs(v[n-1]-x);
    int first=abs(0-v[0]);
    ans=max({adj,jda,first});
    cout<<ans<<"\n";
}
}