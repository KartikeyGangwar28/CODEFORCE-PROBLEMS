#include <iostream>
using namespace std;
int main(){//solved but analyse a bit more
    int friends,bottles,quantity,lemons,slices,salt,reqDrink,reqSalt;
    cin>>friends>>bottles>>quantity>>lemons>>slices>>salt>>reqDrink>>reqSalt;
    int totalDrink=bottles*quantity;
    int totalLemons=lemons*slices;
    int ans=0;
    //making total drink!=0 totalsalt!=0 basically keeps on decreasing them even if the become negative;
   while(totalDrink>=reqDrink&&totalLemons>0&&salt>=reqSalt)
   {   totalDrink-=reqDrink;
        salt-=reqSalt;
       totalLemons-=1;
       ans+=1;
   }
   cout<<ans/friends;
   
}