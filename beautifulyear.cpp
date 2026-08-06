#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool checkDistinct(int s){
   unordered_set<int>m;
   while(s!=0){
    m.insert(s%10);
    s=s/10;
   }
   if (m.size()==4){
    return true;
   }
   return false;

}
int main(){
    int year;
    cin>>year;
    year+=1;
    while(checkDistinct(year)!=1){
        year+=1;
    }
    cout<<year;
    
}