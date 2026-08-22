#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int ans=0; //we can also do ans+=n/100 and ans=n%100; same for all others;
        while(n>=100){
            n=n-100;
            ans+=1;
        }
   
        while(n>=20){
            n=n-20;
            ans+=1;
        }
   
        while(n>=10){
            n-=10;
            ans++;
        }
  
        while(n>=5){
            n=n-5;
            ans+=1;
        }
    
        while(n!=0){
            n--;
            ans++;
        }
       cout<<ans;
    }
   
