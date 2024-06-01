#include <iostream>
#include <cmath>
#include <conio.h>
#include <fstream>
#include <string>
#include "front page.h"
using namespace std;
void quadratic(){
	cout<<"  \n";
	cout<<"\tTHIS PROGRAM ALCULATES THE QUADRATIC EQUATION BY INPUTING YOUR COEFICIENTS(a,b & c)\n";
	cout<<"            NOTE: IT DOESNT SHOW THE STEPS BUT ANSWERS ONLY \n";
	cout<<"  \n";
	double a=0.0;
	double b=0.0;
	double c=0.0;
	double x1;
	double x2;
	const int k= -1;
	cout<<"  enter coeficient a from your quadratic equation\n";
	cin>>a;
	cout<<" enter coeficient b from your quadratic equation\n";
	cin>>b;
	cout<<" enter coeficient c from your quadratic equation\n";
	cin>>c;
	x1=(k*b-(sqrt(pow(b,2)-4*a*c)))/2*a;
		x2=(k*b+(sqrt(pow(b,2)-4*a*c)))/2*a;
		cout<<"x = "<<x2<<" or x = "<<x1<<endl;
}
void trapesium(){
	cout<<" "<<endl;
	cout<<"\t THIS PROGRAMME CALCULATES THE AEA OF THE TRAPESIUM BY ENTERING(a,b,h)\n";
	cout<<" "<<endl;
	const double k =0.5;
	double a=0.0;//using double in declaration because most of the time we may find the parameters are in decimals
	double b=0.0;
	double h=0.0;
	double area;
	cout<<"enter the length a of the trapesium \n";
	cin>>a;
	cout<<"enter the length b of the trapesium \n";
	cin>>b;
	cout<<"enter the height h of the trapesium \n";
	cin>>h;
	area = k*(a+b)*h;
	cout<<"AREA = "<<area<<"cm^2"<<endl;
}
void circle(){
	cout<<""<<endl;
	cout<<"\t this programme calculate the cirumference of the circle when you enter radius\n";
	cout<<""<<endl;
	double radius =0.0;//initializing all the variable to avoid throwing in gabbages or dirts by computer
	const double PI=3.142;
	double circumference=0.0;
	cout <<" enter the radius of the circle \n";
	cin>>radius;
	circumference =PI*(pow(radius,2));
	cout<<"CIRCUMFERENCE = "<<circumference<<endl;
	
}
void calculations(){
	cout<<"THIS PROGRAMME PERFORMS CALCULATIONS FOR TWO GIVEN REAL NUMBERS \n";
	double num1;
	double result;
	char sign;
	double num2;
	cout<<"enetr your first number \n";
	cin>>num1;
	cout<<"enter your  sign -, +, *, / \n";
	cin>>sign;
	cout<<"enter your second number \n";
	cin>>num2;
	if(sign=='-'){result=num1-num2;
	cout<<"result = "<<result;}
	else if(sign=='+'){result=num1+num2;
	cout<<"result = "<<result;
	}
	else if(sign=='*'){result=num1*num2;
	cout<<"result = "<<result;
	}
	else if(sign=='/'){result=num1/num2;
	cout<<"result = "<<result;
	}
	else{
		cout<<"you have entered a wrong sign please try again \n";
	}

}
void acceleration(){
cout<<""<<endl;	// a guide of what a user is expected to enter.
cout<<"this programme calculaters the acceleration by entering the values( initial velocity,final velocity & time taken \n";
cout<<""<<endl;
double Vf=0.0;
double Vi=0.0;
double accl=0.0;
double time=0.0;
cout<<" enter the final velocity \n";
cin>>Vf;
cout<<"enter the initial velocity \n";
cin>>Vi;
cout<<" enter the time taken \n";
cin>>time;
accl=(Vf-Vi)/time;
cout<<"ACCELLERATION = "<<accl<<"m/s^2"<<endl;
	
}
void kinetic(){
	cout<<""<<endl;
	cout<<"\t THIS PROGRAMME CALCULATES KINETIC ENERGY \n";
		cout<<""<<endl;
		double mass=0.0;
		double Vf=0.0;
		double Vi=0.0;
		const double k =0.5;
		double KE=0.0;
		cout<<"enter the  mass of an object \n";
		cin>>mass;
		cout<<"enter the final velocity of an object \n";
		cin>>Vf;
		cout<<"enter the initial velocity of an object \n";
		cin>>Vi;
		KE=k*mass*pow((Vf-Vi),2);
		cout<<"KINETIC ENERGY = "<<KE<<"J"<<endl;
}
void potential(){
	cout<<""<<endl;
	cout<<"\t THIS PROGRAMME CALCULATES POTENTIAL ENERGY \n";
	cout<<""<<endl;
	double mass=0.0;
	double height=0.0;
	const int gravity=10;
	double PE=0.0;
	cout<<"enter the mass of an object \n";
	cin>>mass;
	cout<<"enter the height at which the object is \n";
	cin >>height;
	PE=mass*gravity*height;
	cout<<"POTENTIAL ENERGY = "<<PE<<"J"<<endl;
	
}
void mathematics(){
	cout<<""<<endl;
	cout<<"______________________________________________________________________________\n";
	cout<<"|\t\t\t MENUE                                                  \n";
	cout<<"______________________________________________________________________________\n";
	cout<<"| 1.QUADRATIC EQUATION                                                        |\n";
	cout<<"| 2.AREA OF TRAPESIUM                                                         |\n";
	cout<<"| 3.CIRCUMFERENCE                                                             |\n";
	cout<<"| 4.SIMPLE CALCULATOR                                                         |\n";
	cout<<"|                                                                             | "<<endl;
	cout<<"______________________________________________________________________________\n";
	int choice;
	cout <<"enter your option \n";
	cin>>choice;
	int main();
	switch(choice){
		
		case 1:
			quadratic();
			break;
			case 2:
				trapesium();
				break;
				case 3:
					circle();
					break;
					case 4:
						calculations();
						break;
						defult:
							cout<<"wrong choice try again \n";
							int main();
							break;
		
		
	}
}
void physics(){
	cout<<""<<endl;
	cout<<"______________________________________________________________________________\n";
	cout<<"|\t\t\t MENUE                                                  \n";
	cout<<"______________________________________________________________________________\n";
	cout<<"| 1.ACCELERATION                                                              |\n";
	cout<<"| 2.KINETIC ENERGY                                                            |\n";
	cout<<"| 3.POTENTIAL ENERGY                                                          |\n";
	cout<<"|                                                                             | "<<endl;
	cout<<"______________________________________________________________________________\n";
	int option;
	cout <<"enter your option \n";
	cin>>option;
	switch(option){
		case 1:
			acceleration();
			break;
			case 2:
				kinetic();
				break;
				case 3:
					potential();
					break;
						defult:
							cout<<"wrong choice try again \n";
							int main();
							break;
		
		
	}
}

int main(){
//	cout<<"1.register"<<endl;
//	cout<<"2.login"<<endl;
//	int cho;
//	cout<<"enter choice\n";
//	cin>>cho;
//	switch(cho){
//		case 1:
//			reg();
//			break;
//			case 2:
//				logi();
//				break;
//	}
int options;//the choice will get from the user.
cout<<""<<endl;
	cout<<"______________________________________________________________________________\n";
	cout<<"|\t\t\t\t MENUE                                                              |\n";
	cout<<"|____________________________________________________________________________|\n";
	cout<<"| 1.MATHEMATICS                                                              |\n";
	cout<<"| 2.PHYSICS                                                                  |\n";
	cout<<"|                                                                            | "<<endl;
	cout<<"|____________________________________________________________________________|\n";
	cout<<"enter your choice from the list above \n";
	cin>>options;
	switch(options){
		case 1:
			mathematics();
			break;
			case 2:
				physics();
				break;
				defult:
				
					cout<<"wrong choice try again \n";
					break;
}
	return 0;
}