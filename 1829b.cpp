#include <iostream>
using namespace std;
int main(){//solved;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,ans=0;
        while(n--){
            int a;
            cin>>a;
            if(a==0){
                count+=1;
                ans=max(ans,count);
            }
            else{
                count=0;
            }
        }
        cout<<ans<<"\n";
    }
   

}