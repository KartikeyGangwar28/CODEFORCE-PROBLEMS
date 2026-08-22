#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
   int s1=s[0]+s[1]+s[2]-(48*3);//not needed to subtract because all in ascii values will give same sum;
   int s2=s[3]+s[4]+s[5]-(48*3);
   if(s1==s2){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }
}

}