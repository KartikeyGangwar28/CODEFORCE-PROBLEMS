#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){//not solved;
int n;
cin>>n;
unordered_map<char,int>m;
while(n--){
    string s;
    cin>>s;
for(int i=0;i<s.size();i++){
    m[s[i]]++;
}
}
if(n==1){
    cout<<s;
    return 
}
int max=0;
char ans;
for(auto&it:m){
    if(it.second>max){
         ans=it.first;
         max=it.second;
    }
}
cout<<ans;
}