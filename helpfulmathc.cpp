#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 int main(){
         string s;
         cin>>s;
         int n=s.size();
        for(int i=0;i<n;i+=2){
            for(int j=i;j<=n;j+=2){
                    if(s[i]>s[j]){
                        swap(s[i],s[j]);
                    }
            }
        }
        cout<<s;
} 