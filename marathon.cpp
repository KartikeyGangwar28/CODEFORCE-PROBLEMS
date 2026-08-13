#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    //     int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // int mx=max(max(a,b),max(c,d));
    // if(mx==a){
    //     cout<<0<<"\n";
    // }
    // else{
    //     int ans=0;
    //     if(b>a){
    //         ans+=1;
    //     }
    //     if(c>a){
    //         ans+=1;
    //     }
    //     if(d>a){
    //         ans+=1;
    //     }
    //     cout<<ans<<"\n";
    // }
    int n=4;
    int prev=INT_MIN,ans=0;
    while(n--){
        int a;
        cin>>a;
        if(a>prev){
          ans+=1;
        }
        if(prev==INT_MIN)
        {prev=a;}

    }
    cout<<ans-1<<"\n";
    }
    
}