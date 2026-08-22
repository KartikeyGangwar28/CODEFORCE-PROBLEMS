#include <iostream>
#include <string>
using namespace std;
int main(){//solved- basically all upper to all lower,if first lower and all upeer then first upper all lower,any other case return as it is'
string s;
cin>>s;
int n=s.size();
bool nolowercase=true;
for(int i=0;i<n;i++){
    if(islower(s[i])){
        nolowercase=false;
        break;
    }
}
if(nolowercase==true){
    for (int i = 0; i < n; i++)
    {
        s[i]=tolower(s[i]);
    }
     cout<<s;
return 0; 
}
if(islower(s[0])){
    bool allupper=true;
for(int i=1;i<n;i++){
    if(islower(s[i])){
        allupper=false;
        break;
    }
}
if(allupper){
    s[0]=toupper(s[0]);
    for(int i=1;i<n;i++){
            s[i]=tolower(s[i]);
    }
}
cout<<s;
return 0;
}
cout<<s;
}