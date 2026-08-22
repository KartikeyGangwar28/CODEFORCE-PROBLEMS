#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int first=n%10;
    int steps=10*(first-1);
    string num=to_string(n);
    int size=num.size();
    // cout<<size<<"\n";
    int ans=steps+(((size)*(size+1))/2);
    cout<<ans<<"\n";
}
}