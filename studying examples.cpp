#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
void Demo(){
	
/*	static int a =0;
	cout <<a<<endl;
	a++;
	*/	
		string x;
		int age;
		char gender;
	
		cout<<"eneter your full name"<<endl;
		getline(cin, x);
		cout<<"enter your age"<<endl;
		cin>>age;
		for(char gender='m'; gender!='m'; gender++)
		{
			cout<<"enter your gender"<<endl;
		cin>>gender;
			cout<<"you are qualified to the selected group"<<endl;
			
		}
		
			cout<<"you are not qualified to thr selected group"<<endl;
		
			
}

void sum(string name,string surname,string gender)
{
	
	string x =name+surname+gender;
	cout<<"enter your school department and your student number\n";
	getline(cin,x);
cout<<x<<endl;
};
int main (){

 
sum("","","");
Demo();
getch();





return 0;
}