#include <iostream>
#include <string>
using namespace std;
bool isvowel(char c){//not solved
c=tolower(c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    return true;
}
return false;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<s.size();i++){
        if(isvowel(s[i])){
            s.erase(s.begin()+i);
            if(i!=0){
                i--;
            }
        }
        else if(!isvowel(s[i])){
            s.insert(s.begin()+i,'.');
        }
        else if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
}