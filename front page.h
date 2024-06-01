#include <string>
#include <iostream>
#include <fstream>
using namespace std;
void reg(){
	
	ofstream recorder;
	recorder.open("info.txt");
	string username;
	string password;
	cout<<"enter your user name \n";
	cin.clear();
	getline(cin,username);
	cout<<"enter your passwod \n";
	cin>>password;
	cout<<"registration successful \n";
	recorder<<username<<endl;
	recorder<<password<<endl;
	recorder.close();
}
logi(){
	string name;
	string pass;
	string username;
	string password;
	ifstream check;
	int com;
	cout<<"enter your username\n";
	getline(cin,name);
	cout<<"enter ypur password \n";
	getline(cin,pass);
	check.open("info.txt");
	while(check){
		if(pass==password && name==username){
			cout<<"access granted \n";
			
		}
		
		else{cout<<"access denied \n";
		}

}
check.close();
}