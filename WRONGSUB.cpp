#include <iostream>
using namespace std;
int main(){
//   long long int n,k;
//     cin>>n>>k;
//     while(k--){
//         if(n%10==0){
//             n=n/10;
//         }
//         else{
//             n-=1;
//         }
//     }
//     cout<<n;
//lucky number 
long long int n;
cin>>n;
int c=0;
while(n!=0){
  if(n%10==4||n%10==7){
    c+=1;
  }
  n=n/10;
}
if(c==4||c==7){
    cout<<"YES";
    return 0;
}
cout<<"NO";
}
