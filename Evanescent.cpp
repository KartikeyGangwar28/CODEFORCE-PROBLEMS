#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        unordered_set<string>v(s.begin(),s.end());
        cout<<v.size();

    }
}