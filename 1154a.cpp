#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>v={a,b,c,d};
sort(v.begin(),v.end());//positive hain isliye;
int x=v[3]-v[2];
int y=v[3]-v[1];
int z=v[3]-v[0];
cout<<x<<" "<<y<<" "<<z;

    
}