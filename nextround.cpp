#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
   vector<int>v(n+1);
   int i=1;
        for(i=1;i<=n;i++){
            cin>>v[i];
        }
        int threshold=v[k];
        for(i=1;i<=n;i++){
              if(v[i]>=threshold&&v[i]>0){
                count+=1;
              }
              else{
                break;
              }
        }
        cout<<count; //i will be count+1 as it starts from 1 already;
}