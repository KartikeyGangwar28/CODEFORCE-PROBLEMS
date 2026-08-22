#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n!=5){
        cout<<"No\n";
    }
 else if(s.find('T')==string::npos){
    cout<<"NO\n";
}
else{
string temp="Timru";
sort(s.begin(),s.end());
bool flag=true;
for(int i=0;i<n;i++){
    if(s[i]!=temp[i]){
        cout<<"NO\n";
        flag=false;
        break;
    }
  
}
  if(flag==true){
        cout<<"YES\n";
    }
  
}
}
}