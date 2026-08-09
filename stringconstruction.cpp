#include <iostream>
#include <vector>
using namespace std;
int main(){ //need exactly k matching pairs not more not less so alternate placing won't work;
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    if(n/k<=1){
        cout<<-1<<endl;
    }
    else{ string s(n,0);
        for(int i=0;i<n-1;i++){
          if(i%2!=0){
            s[i]='1';
          }
          else{
            s[i]='0';
          }
        }
        cout<<s<<endl;
    }
}
}