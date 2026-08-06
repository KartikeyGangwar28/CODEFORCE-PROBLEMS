#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string req="codeforces";
    string pres;
    cin>>pres;
    int count=0;
    for(int i=0;i<10;i++){
        if(req[i]!=pres[i]){
            count+=1;
        }
    }
    
    cout<<count<<endl;
}
}