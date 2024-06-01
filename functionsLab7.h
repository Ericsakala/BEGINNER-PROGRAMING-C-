#include <iostream>
#include <string>
using namespace std;
double average(){
	cout<<"THIS PROGRAMME CALCULATES THE AVERAGE OF TWO NUMBERS \n";
	double num1,num2;
	double results;
	cout<<"enter your first number \n";
cin>>num1;
cout<<"enter your second number \n";
cin>>num2;	
	results=(num1+num2)/2;
cout<<"Results= "<< results;
	return results;
}
int exit(){
	return 0;
}
void Grosspay(){
	int hours=0;
	double payRate=0;
	double grossPay =0;
	cout<<"enter the hours you worked \n";
	cin>>hours;
	cout<<"enter pay rate \n";
	cin>>payRate;
	grossPay=payRate*hours;
	cout<<"Gross Pay = $ "<<grossPay;
	
}
double add(){
	double num1,num2,answer;
	cout<<"this programme performs the addition of two numbers\n enter the first nummber\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	answer=num1+num2;
	cout<<"answer is = "<<answer<<endl;
	return answer;
}
double sub(){
	double num1,num2,answer;
	cout<<"this programme performs the subtraction of two numbers\n enter the first nummber\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	answer=num1-num2;
	cout<<"answer is = "<<answer<<endl;
	return answer;
}
double mult(){
	double num1,num2,answer;
	cout<<"this programme performs the multiplication of two numbers\n enter the first nummber\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	answer=num1*num2;
	cout<<"answer is = "<<answer<<endl;
	return answer;
}
double divide(){
	double num1,num2,answer;
	cout<<"this programme performs the division of two numbers\n enter the first nummber\n";
	cin>>num1;
	cout<<"enter the second number\n";
	cin>>num2;
	answer=num1/num2;
	cout<<"answer is = "<<answer<<endl;
	return answer;
}
void calculations(){
		
int choice;
cout<<endl;
cout<<"1. ADDITION \n";
cout<<"2. SUBTRACTION \n";
cout<<"3. MULTIPLICATION"<<endl;
cout<<"4. DIVISION"<<endl;
cout<<"5. EXIT"<<endl;
cout<<"enter your choice"<<endl;	
cin>>choice;

switch(choice){
	case 1:
	add();
	
	cout<<endl;
	int main();
	break;
	case 2:
	sub();
		cout<<endl;	
	int main();
	break;
	case 3:
mult();
	cout<<endl;	
	int main();
	break;

	case 4:
divide();
	cout<<endl;	
	int main();
	break;
		case 5:
		exit();
	

	break;
default:
	cout<<"wrong entry! pleae choose from the option above\n";
		cout<<endl;	
	int main();
	break;
	
}

	
	
}

