#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int prev=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            count+=1;
        }
    }
   cout<<count+1;
}