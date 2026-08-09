#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
int odd=(n+1)/2; 
if(k<=odd){
    cout<<(2*k)-1;
    return 0;
}
if(k>odd){
    k=k-odd;
}
cout<<2*k;//fails at 8;
}
// vector<int>v;
// for(int i=1;i<=n;i++){
//   if(i%2!=0){
//     v.push_back(i);
//   }
// }
// for(int i=1;i<=n;i++){
//   if(i%2==0){
//     v.push_back(i);
//   }
// }
// cout<<v[k-1];
//can be optimised based on pattern that first n/2 number are odd then even so if k<=n/2 we return kth odd number else we return 