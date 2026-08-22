#include <iostream>
using namespace std;
int main(){//wrong on test 4;
int strength,dragons;
cin>>strength>>dragons;
bool flag=true;
while(dragons--){
    int dragonstrength,bonus;
    cin>>dragonstrength>>bonus;
    if(strength<=dragonstrength){
       flag=false;
    }
    else{
        strength+=bonus;
    }
  
}
if(!flag){
    cout<<"NO";
    return 0;
}
cout<<"YES";


}