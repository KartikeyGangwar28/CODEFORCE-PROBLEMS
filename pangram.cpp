#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n<26){
    cout<<"NO";
    return 0;
  }
  string s;
  cin>>s;
  unordered_set<int>a;
  for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
    a.insert(s[i]);
  }
  if(a.size()>=26){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}