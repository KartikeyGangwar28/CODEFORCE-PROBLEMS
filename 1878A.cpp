#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; //solved
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        // vector<int>v(n);
         bool flag=false;
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        //     if(v[i]==k){
        //         flag=true;
        //     }
        // }
        while(n--){
            int a;
            cin>>a;
            if(a==k){
                flag=true;
            }
        }
        if(flag==false){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES\n";
        }
        
    }
}