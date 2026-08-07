#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int present,max;
        cin>>present>>max;
        if((max-present)>=2){
            ans+=1;
        }
    }
cout<<ans;
}