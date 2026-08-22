#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mish=0,chris=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            mish+=1;
        }
        else if(b>a){
            chris+=1;
        }
        
    }
    if(mish>chris){
        cout<<"Mishka";
    }
    else if(chris>mish){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}