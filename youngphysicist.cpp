#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sx=0,sy=0,sz=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        sx+=a;sy+=b;sz+=c;
    }
    if(sx==0&&sy==0&&sz==0){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

}