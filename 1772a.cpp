#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
      int sum=s[0]+s[2]-96;
      cout<<sum<<"\n";
    }
}