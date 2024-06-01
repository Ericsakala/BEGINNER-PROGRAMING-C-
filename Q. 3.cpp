# include <iostream>
using namespace std;
int main()
{
	cout<<"THIS PROGRAM CALCULATE THE SUM OF ENTERED NUMBERS OF YOUR CHOICE AND FIND THE AVERAGE \n";
int limit,total,count=1,sum=0,num=0,average;
cout<<"How many numbers do you want to enter"<<endl; cin>>limit;


while(count<limit+1){
cout<<"Enter a number  \n";
cin>>num;
sum=sum+num;
count++;
}
cout<<"Thesum of total numbers entered is: "<<endl;
cout<<sum<<endl;
cout<<"The average of the numbers entered is: "<<endl;
cout<<sum/limit<<endl;
return 0; }
