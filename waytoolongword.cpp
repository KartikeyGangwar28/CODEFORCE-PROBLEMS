#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n=s.size();
    if(n<=10){
    cout<<s<<endl;
      }
      else{
        int num=n-2;
        string nm=to_string(num);
cout<<s[0]<<num<<s[n-1]<<endl;
      }
    }
}