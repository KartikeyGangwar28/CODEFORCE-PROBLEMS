// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//   int a,b,c,d;
//   cin>>a>>b>>c>>d;
//     string s;
//   cin>>s;
//   int n=s.size();
//   int ans=0;
//   for(int i=0;i<n;i++){
//     if(s[i]=='1'){
//         ans+=a;
//     }
//     else if(s[i]=='2'){
//         ans+=b;
//     }
//     else if(s[i]=='3'){
//         ans+=c;
//     }
//     else{
//         ans+=d;
//     }
//   }
//   cout<<ans;
// }
//34b above solved already
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n&&m>0;i++){
        if(v[i]<0){
            ans+=v[i];
            m-=1;
        }
    }
    ans=-ans;
    cout<<ans;
   
}