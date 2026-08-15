#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v={a,b,c};
      
       sort(v.begin(),v.end());
         if (v[0]+v[1]<v[2])
         {
            v[2]=v[0]+v[1];
         }
       cout<<v[2]-v[0]<<"\n";
      }
        }
    //we can sort if sum of first 2 number is lesser than last number we change it else return max mini 
