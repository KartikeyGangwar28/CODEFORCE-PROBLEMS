#include <iostream>
using namespace std;
int main(){//more optimisation required;
    int cost,coin;
    cin>>cost>>coin;
    int store=cost;
    int count=0;
    while((cost%10)-coin!=0){
        cost+=store;
            count++;
        if(cost%10==0){
            break;
        }
    }
    cout<<count+1;
}