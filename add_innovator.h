#include <iostream>
#include <string>
#include<fstream>
using namespace std;

void adding_innovator(){
	ofstream particulars;
	particulars.open("details.txt",ios::app);
	const int size=80;
	int num,age;
string firstName,SurName,Title_of_innovation,date,category,nrc;
	cout<<"enter the number of inovators you want to add\n";
	cin>>num;
	cin.ignore();
	for(int i=0;i<num;i++){
		
	cout<<"innovator "<<(i+1)<<endl;
	cout<<"enter your first name\n";
	getline(cin,firstName);	
	cout<<"enter your surname\n";
	getline(cin,SurName);
	cout<<"enter the tittle of innovation\n";
	getline(cin,Title_of_innovation);
	cout<<"enter the date submitted\n";
	getline(cin,date);
	cout<<"enter the category of your innovation \n";
	getline(cin,category);
	cout<<"enter your age\n";
	cin>>age;
	cin.ignore();
	cout<<"enter your NRC/PASPORT number\n";
	getline(cin,nrc);
	
	particulars<<(i+1)<<firstName<<"\t";
	particulars<<"FIRST NAME: "<<endl;
	particulars<<"SUR NAME  : "<<SurName<<endl;
	particulars<<"TITLE     : "<<Title_of_innovation[size]<<endl;
	particulars<<"DATE SUBMITED : "<<date<<endl;
	particulars<<"CATEGORY  : "<<category<<endl;
	particulars<<"AGE: "<<age<<endl;
	particulars<<"NRC/PASSPORT: "<<nrc<<endl;
particulars<<endl;
particulars<<endl;

	}
	particulars.close();
	}
