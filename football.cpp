#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int streak=1;
char ele=s[0];
for(int i=1;i<n;i++){
  if(s[i]==ele){
    streak+=1;
    if(streak>=7){
        cout<<"YES";
        return 0;
    }
  }
  else{
    ele=s[i];
    streak=1;
  }
}
cout<<"NO";
}