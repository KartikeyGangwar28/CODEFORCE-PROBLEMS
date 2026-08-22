#include <iostream>
#include <string>
using namespace std;
int main(){//not yet solved;
    int n;
    cin>>n;
    while(n--){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    string l;
    cin>>l;
    int count=0;
    while(s.find(l)==string::npos){
        s.append(s);
        count+=1;
    }
    cout<<count<<"\n";
}

}