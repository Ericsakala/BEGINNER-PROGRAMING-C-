#include <iostream>
#include <fstream>
#include <string>
using namespace std;
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
void ownership(){
	
	string username = "eric";
	int id_no=22105408;
	string name;
	int pass;
	cout<<"enter your user name \n";
	cin>>name;
	cout<<"enter your school id number \n";
	cin>>pass;
	if(name==username&&pass==id_no){
		calculations();
	}
	else
	{
		cout<<"access denied you are not the owner please try your lacky again \n";
		
	}
	
	
}
int main(){
cout<<"---------------------------------------------------------------------\n";
cout<<""<<endl;
cout<<"\t\t| chose your option to login or quit | \n";
cout<<"---------------------------------------------------------------------\n";
cout<<""<<endl;	

cout<<"\t 1.LOGIN \n";
cout<<"\t 2.EXIT \n";	
cout<<"---------------------------------------------------------------------\n";	
int option;
cin>>option;
switch(option){
	
	case 1:
		ownership();
		break;
		case 2:
			cout<<"thank you";
			
			break;
	
}
	return 0;
}