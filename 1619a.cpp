#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=1){
            cout<<"NO\n";
        }
    //  else if(s.size()%2!=0){
    //          cout<<"NO\n";
    //     }
        else{
            int n=s.size();
            // string a;
            // string b;
            // for(int i=0;i<n/2;i++){
            //     a.push_back(s[i]);
            // }
            // for(int i=n/2;i<n;i++){
            //     b.push_back(s[i]);
            // }
            // if(a==b){
            //     cout<<"YES\n";
            // }
            // else{
            //     cout<<"NO\n";
            // }
            bool flag=true;
            for(int i=0,j=n/2;i<n/2&&j<n;i++,j++){
                if(s[i]!=s[j]){
                    // cout<<"NO\n";
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}