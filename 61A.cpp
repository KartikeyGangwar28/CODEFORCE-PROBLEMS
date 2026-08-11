#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
int x=stoi(a,nullptr,2);
int y=stoi(b,nullptr,2);
int ans=x^y;
cout<<ans;
}