#include <iostream>
#include <vector>
using namespace std;
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<int>v(n+1);
 for(int i=1;i<=n;i++){
    cin>>v[i];
 }
 for(int i=1;i<n/2;i++){
    swap(v[i],v[v[i]]);
 }
 for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
 }
}
