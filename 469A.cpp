#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v1(m);
    vector<int>v2(m);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(v1[i]);
        s.insert(v2[i]);
    }
    if(s.size()>=n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    
}