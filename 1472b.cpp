#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int candies;
        cin>>candies;
        vector<int>v(candies);
        for(int i=0;i<candies;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int alice=0,bob=0;
      for(int i=0;i<candies;i++){
         if(i%2==0){
            alice+=v[i];
         }
         else{
            bob+=v[i];
         }
      }
        if(alice==bob){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
}