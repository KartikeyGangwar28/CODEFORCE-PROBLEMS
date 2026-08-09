#include <iostream>
#include <string>
using namespace std;//282A
int main(){
 int n;
 cin>>n;
 int temp=0;
 while(n--){
  string s;
  cin>>s;
  // if(s=="++X"){
  //   ++temp;
  // }
  // else if(s=="--X"){
  //   --temp;
  // }
  // else if(s=="X++"){
  //   temp++;
  // }
  // else if(s=="X--"){
  //   temp--;
  // }
  if(s[1]=='+'){
    temp++;
  }
  else{
    temp--;
  }
 }
 //when we break out of loop ++temp and temp++ both become equal;
 //instead of if else ladder we could have done i s[1]==+ temp++ else temp--;
 //the post and pre increment or decrement play a major role when we want to store that value into a third element;
 //order of operation is from left to right so when we do int x=temp++ x stores temp and temp increases later on  but till the end temp values becomes updated
 cout<<temp;
  
    //BELOW ONE WAS A DIFFERENT PROBLEM WHICH WAS SOLVED;
  // string s,t;
  // cin>>s>>t;
  // int n=s.size();
  // int m=t.size();
  // if(n!=m){
  //   cout<<"NO";
  //   return 0;
  // }
  // for(int i=0,j=n-1;i<n,j>=0;i++,j--){
  //   if(s[i]!=t[j]){
  //       cout<<"NO";
  //       return 0;
  //   }

  // }

  // cout<<"YES";
}