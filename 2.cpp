#include <iostream>
using namespace std;
int main(){
    int it;
    cin>>it;
    while(it--){
        int x,y;
        cin>>x>>y;
        if(x%y==0){
            cout<<"YES"<<endl;
           
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}