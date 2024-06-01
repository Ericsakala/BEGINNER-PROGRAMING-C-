#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
class student{
string name;
int id;
int age;
public:
string courses[6];
string school;
string coursecode[6];
	
	void registration(){
		
		ofstream particulars;
		particulars.open("studentinfo.txt");
		cout<<"enter your name \n";
		getline(cin,name);
		cout<<"enter your id number\n";
		cin>>id;
		cout<<"enter your age \n";
		cin>>age;
		for(int i=0;i<6;i++){
		cout<<"enter your course "<<(i+1)<<endl;
		getline(cin,courses[i]);
		}
			for(int i=0;i<6;i++){
		cout<<"enter your course code "<<(i+1)<<endl;
		getline(cin,coursecode[i]);
		}
		particulars<<"----------------------------------------------------------------\n";
		particulars<<"| NAME:"<<name<<" AGE:"<<age<<" SIN:"<<id<<"|"<<endl;
		particulars<<"|--------------------------------------------------------------|--\n";
		particulars<<endl;
		particulars<<"----------------------------------------------------------------\n";
		particulars<<"NO.COURSES\tCOURSECODE"<<endl;
		for(int i=0;i<6;i++){
			particulars<<(i+1)<<courses[i]<<"|\t"<<coursecode[i]<<endl;
			particulars<<"----------------------------------------------------------------\n";
		}
		particulars.close();
	}
	
};
int main (){
	student info;
	info.registration();
	return 0;
}