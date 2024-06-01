#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double average;
	const int num =3;
	double num1,num2,num3;
	cout<<"this programme calculates the average of of three different numbers of your choice\n\n\n";
	cout<<"enter the first number\n";
	cin>>num1;
		cout<<"enter the second number\n";
	cin>>num2;
	
		cout<<"enter the thirdt number\n";
	cin>>num3;
	average =(num1+num2+num3)/num;
	cout<<"the average is : "<<average;
	
	
	
	return 0;
}