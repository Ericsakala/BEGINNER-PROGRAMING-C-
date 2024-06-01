#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void top(){
	string header;
	ofstream file;
	file.open("header.txt", ios::app);
	header="name\tclass\tgrade";
	file<<header<<endl;
	file.close();
}
void getUserData(){
	string name,clas,grade;
	ofstream data;
	data.open("details.txt", ios::app);
	cout<<"enter our name\n";
	cin.ignore();
	getline(cin,name);
	
	cout<<"enter our class\n";
	getline(cin,clas);
	cout<<"enter our grade\n";
	getline(cin,grade);
	data<<name<<"\t"<<grade<<"\t"<<clas<<endl;
	data.close();
}
void print(){
string name,clas,grade;
ifstream read;

	read.open("details.txt",ios::in);	
while(!read.eof()){

	read>>name;
	read>>clas;
	read,grade;
	
	
}
cout<<name<<"\t"<<clas<<"\t"<<grade<<endl;
	read.close();
	
}


int main(){
	string header;
fstream check;
check.open("header.txt");
getline(check,header);
	
	if(header=="name\tclass\tgrade"){
	cout<<"";	
	}
	else
	{
		top();
	}
	int choice;
	cout<<"1. add\n";
	cout<<"1. display\n";
	cout<<"enter your choice\n";
	cin>>choice;
	switch(choice){
		case 1:
		getUserData();
		break;
		case 2:
		print();
		break;	
	}
			

	
	
return 0;	
}
