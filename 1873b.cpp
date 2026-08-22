#include <iostream>
#include <vector>
using namespace std; //solved;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini=INT_MAX,index=0;
    int zeroes=0;
    for(int i=0;i<n;i++){
           if(v[i]<mini){
            mini=v[i];
            index=i;
           }
           if(v[i]==0){
            zeroes+=1;
           }
    }
    if(zeroes>=2){
        cout<<0<<"\n";
    }
    else{
    v[index]+=1;
   long long int ans=1;
    for(int i=0;i<n;i++){
        ans*=v[i];
    }
    cout<<ans<<"\n";
    }
}
}