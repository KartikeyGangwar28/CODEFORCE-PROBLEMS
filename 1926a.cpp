#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=5;
        int a=0,b=0;
        while(n--){
            char c;
            cin>>c;
            if(c=='A'){
                a+=1;
            }
            else{
                b+=1;
            }
        }
        if(a>b){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
}