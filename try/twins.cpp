#include <iostream>
#include <vector>
using namespace std;
int main(){//not yet solved
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int suffix=0,prefix=0;
int count=0;
for(int i=0;i<n;i++){
     if(prefix+v[i]<suffix){
         prefix+=v[i];

    }
    else {
    suffix+=v[i];
    count++;
    }
    
}
cout<<count;
}