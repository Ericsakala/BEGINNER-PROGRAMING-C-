#include <iostream>
using namespace std;
int calculator(int num1,int num2,char op){
	if(op=='+'){
		return num1+num2;
	}
	else if(op=='-'){
		return num1-num2;
	}
	else if(op=='*')
	{
		return num1*num2;
		
	}
	else if(op=='/')
	{
		return num1/num2;
	}
	else
	{
		return -1;
	}
	

}
int main (){
	
long double i=0;
long double j=0;
char op;
cout<<"THIS PROGRAM IS A SIMPLE CALCULATOR \n";
cout<<"enter your first number \n";
cin>>i;
cout<<"enter your operator(+, -, *, /) \n";
cin>> op;
cout<<"enter your second number \n";	
cin>>j;
long double result=calculator(i,j,op);
	
cout<<"answer = "<<result;	
	
	
	return 0;
}