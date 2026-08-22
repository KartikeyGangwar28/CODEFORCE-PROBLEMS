#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<2<<"\n";
        }
        else{
            unordered_set<int>st;
           int ans=0;
            for(int i=0;i<n;i++){
                if(st.size()==0){
                    st.insert(s[i]);
                    ans+=2;
                }
                else{
                   if(st.find(s[i])==st.end()){
                    ans+=2;
                    st.insert(s[i]);
                   }
                   else{
                    ans+=1;
                   }
                }
            }
            cout<<ans<<"\n";
        }
    
    }
}