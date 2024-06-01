#include <iostream>
using namespace std;
int main () {
	cout<<"THIS PROGRAMME CALCULATE THE SUM OF TWO NUMBERS OF YOUR CHOICE \n";
double num1, num2, sum,
choice;
do
{
cout<<"Enter two numbers\n";
cin>>num1;
cout<<"Enter two numbers\n";
cin>>num2;
sum = num1 + num2;
cout<<" The sum of "<<num1 <<" and "<<num2 <<" is " <<sum <<endl;
cout<<"Do you want to perform this operation again?)\n";
cout<<"\t1. Yes\t2. No\n";
cin>>choice;
}
while (choice !=2);


return 0;
}
