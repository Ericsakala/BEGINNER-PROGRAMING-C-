#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void make(){
	string name;int cell;
		cout<<"enter yout name \n";
	getline(cin, name);
	cout<<"enter your phone number \n";
	cin>>cell;
	ofstream details;
	details.open("particulars.txt");

	details<<name<<endl<<cell<<endl;
	details.close();
	
}

void login()	{
string username;int password;
	
		ifstream loginfo;
	string name;
	int cell;
	loginfo.open("particulars.txt");


	while(loginfo>>name>>cell){
		if(username==name && password==cell){
			
				cout<<"access grantes\n";
		}
		
		cout<<"enter your user name\n";
	getline(cin, username);
	cout<<"enter your numeric password\n";
	cin>>password;	
	}
loginfo.close();
}
	

int main (){
	

	string name,username;
	int cell,password;
	cout<<"1.\t LOGIN"<<endl;
	cout<<"2.\t REGISTER"<<endl;
	int choice;
	cout<<"enter your choice\n";
	cin>>choice;
	
	switch(choice){
		case 1:
			for(int i=0;i<2;i++){
				login();	
		cin.clear();
			}
		
		break;
		case 2:
			for(int j=0;j<2;j++){
				make();
			cin.clear();
			}
			
			break;
			
	}


}



