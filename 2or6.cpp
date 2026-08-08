#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
long long int n;
cin>>n;
if(n==1){
    cout<<0<<endl;
    
}
else{
int count=0;
bool flag=false;
while(n>=1){
    if(n%6==0){
        n=n/6;
        if(n==1){
            cout<<count+1<<endl;
            flag=true;
        }
    }
    else {
        n=n*2;
    }
    count++;
}
if(n!=1&&flag==false){
    cout<<-1<<endl;
   
}
else if(flag==false&&n==1) {
cout<<count<<endl;
}
}
    }
}