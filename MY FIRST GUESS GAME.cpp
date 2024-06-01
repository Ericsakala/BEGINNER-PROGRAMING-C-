#include <iostream>
using namespace std;
int main() { int secretenum = 19;
int guess;
int guesslimit =4;
int guesscount = 0;
bool outofguess = false;

while(secretenum != guess &&  !outofguess )
{
if(guesscount < guesslimit)
{
  cout << "guess the hidden secrete number between 0 and 30 \n";
cin >> guess;
guesscount ++;
}
else{
  outofguess = true;
  
}

 }
  if(outofguess)
  {  
   cout << " give it another try ,you lose!??????????!!"<<endl;
}
  
else
  {
    cout << "congrats you win!?????? \n"; 
  }
 
                
return 0;
}
