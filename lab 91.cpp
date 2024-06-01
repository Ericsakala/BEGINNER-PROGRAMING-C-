#include <iostream>
using namespace std;
int main(){
	
float num1=0.0;
float num2=0.0;
float average=0.0;
cout<<"enter the first number\n";
cin>>num1;
cout<<"enter the second number\n";
cin>>num2;
average=num1+num2/2;//discovered a problem is order of precedence on BOADMASS
						//correct is (num1+num2)/2
cout<<"average is = "<<average<<endl;	
	
	return 0;
}