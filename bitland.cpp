#include <iostream>
#include <string>
using namespace std;
int main(){
    // int n;
    // int x=0;
    // while(n--){
    //     string op;
    //     cin>>op;
    //     for(int i=0;i<2;i++){
    //         if(op.find("++",i+1)!=string::npos){
    //             x+=1;
    //         }
    //         if()
    //     }
    // }
  string s,t;
  cin>>s>>t;
  int n=s.size();
  int m=t.size();
  if(n!=m){
    cout<<"NO";
    return 0;
  }
  for(int i=0,j=n-1;i<n,j>=0;i++,j--){
    if(s[i]!=t[j]){
        cout<<"NO";
        return 0;
    }

  }

  cout<<"YES";
}