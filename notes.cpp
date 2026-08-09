#include <iostream>
using namespace std;
int main(){
    int x=4;
    cout<<x<<" "<<x++<<" "<<x--;
    //x=4 then x is printed 4 it increased to 5 then print again and decreased to 4 so y=5;
    int y=x;
    cout<<y;
    //when we break out of loop(while or for) ++temp and temp++ both become equal;
 //instead of if else ladder we could have done i s[1]==+ temp++ else temp--;
 //the post and pre increment or decrement play a major role when we want to store that value into a third element;
 //order of operation is from left to right so when we do int x=temp++ x stores temp and temp increases later on  but till the end temp values becomes updated 
}