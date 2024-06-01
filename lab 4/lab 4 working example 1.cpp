#include <iostream>
#include <cmath>
using namespace std;
int main (){
	// EXAMPLE 1 ,GETTING AN INTEGER FROM THE USERR
/*	int i;
	cout << "please enter and integer value\n";
	cin>>i;
	cout << "the value you entered is: "<<i<<endl;
*/
			//EXANPLE 2,GETTING A STRING FROM THE USER
			/*
			string full_name;
			cout<<"please enter your full name"<<endl;
			getline(cin,full_name);
			cout<<"your full name is: "<<full_name<<endl;
			*/
							//EXAMPLE THREE GETTING TWO VALUES FROM THE USER AND CALCULATE THE AVERAGE
								/*
						double num1=0,num2=0,average=0;
						cout<<"this programme calculates and display the average of two numbers\n\n\n";
						cout<<"please enter the value of the first number"<<endl<<endl;
						cin>>num1;
						cout<<"please enter the valiue of the second number"<<endl;
						cin>>num2;
						average=(num1+num2)/2;
						cout<<"the average of "<<num1<<" and "<<num2<<" is: "<<average<<endl;
						*/
									//EXAMPLE 4 CALCULATING AREA OF THE CIRCLE
									/*const float pi=3.142;
									float area=0,radius=0;
									cout<<"the programme calculate the area of the circle\n\n\n";
									cout<<"please enter the radius\n";
									cin>>radius;
									area=pi*pow(radius,2);
									cout<<"the area of the circle is : "<<area<<endl;
									*/	
											//EXAMPLE 5 OVERFLOW AND UNDERFLOW
											short int x;
											x=32767+1;
											cout<<"overflow results: "<<x<<endl;
											x=-32767-1;
											cout<<"underflow results: "<<x<<endl;
											float test;
											test=2.0e38 *1000;
											cout<<"overflow results : "<<test<<endl;
											test =2.0e38/2.0e38;
											cout<<"underflow results : "<<test<<endl;
											
	//INREAMENT
/*	short int x=5,y=5;
	cout<<"the value of x is: "<<++x<<endl;
	cout<<"the value of y is: "<<y++<<endl<<endl;
	
	cout<<"the value of x is: "<<x<<endl;
	cout<<"the value of y is: "<<y<<endl<<endl;
	x+=2;
	y=y+2;										
	cout<<"the value of x is: "<<x<<endl;
	cout<<"the value of y is: "<<y<<endl;
										*/	
											
											
	return 0;
}