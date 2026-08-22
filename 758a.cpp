#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mx=v[n-1];
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans+=mx-v[i];
    }
    cout<<ans;
}