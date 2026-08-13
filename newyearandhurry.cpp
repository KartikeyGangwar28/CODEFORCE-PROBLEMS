#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int totalTime=0;
    for(int i=1;i<=n;i++){
        totalTime+=5*i;
    }
    int time=240-k;
    if(totalTime<=time){
        cout<<n;
        return 0;
    }
    int x=1,count=0;
    while(time>=x){
        time-=5*x;
        if(time<0){
            cout<<count;
            return 0;
        }
        x+=1;
        count+=1;
    }
    cout<<count;
}