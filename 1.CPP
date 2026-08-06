#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
        string s(n, ' ');
         int d=0,a=0;
       for(int i=0;i<n;i++){
        cin>>s[i];
       }
         for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a++;
            }
           else if(s[i]=='D'){
                d++;
            }
         }
if(a==d){
    cout<<"Friendship";
}
else if(a>d){
    cout<<"Anton";
   
    
}
else if(d>a){
cout<<"Danik";
    }
}