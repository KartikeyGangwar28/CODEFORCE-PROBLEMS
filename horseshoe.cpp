//228
#include <iostream>
#include <string> 
#include <unordered_set>
using namespace std;
int main(){//TRY TO OPTIMISE IT;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    unordered_set<int>s;
    s.insert(a);s.insert(b);s.insert(c);s.insert(d);
    cout<<4-s.size();
    
}