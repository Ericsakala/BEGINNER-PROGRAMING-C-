#include <iostream>
#include <string>
#include <fstream>
using namespace std;
	bool Register(){
	string username,password;
	ofstream file;
	file.open("security.txt");
	cout<<"enter your username\n";
	cin>>username;
	cout<<"enter your password \n";
	cin>>password;
	file<<username<<endl;
	file<<password;
	file.close();	
	return 1;
}

bool login(){
	string username,password,user,pass;
	int temp;
	cout<<"enter your username\n";
	cin>>user;
	cout<<"enter your password \n";
	cin>>pass;
	ifstream check;
	check.open("security.txt");
	getline(check,username); 
    getline(check,password);
	if(user==username && pass==password)
		{
		
	return 1;
	}
	else
	{
		return 0;
	}
	
	check.close();
	
	
	
	
}


int main(){
	
	
	int choice;
	bool status;
cout<<"\t\t\t------------WELCOME TO A LOGIN PLATFORM--------------------\t\t\t\t \n";
		cout<<"\t\t\t               select your choice                           \t\t\t \n";
		cout<<"\t\t\t     press:                                                 \t\t\t \n";
		cout<<"\t\t\t 1.LOGIN  \n";
		cout<<"\t\t\t 2.REGISTER  \n";
		cout<<"\t\t\t 3.RESET  \n";
		cout<<"enter your option \n";	
		cin>>choice;
		switch(choice){
			
		case 1:
		 status = login();
		if(status)
		{
			cout<<"login successful\n";
			system("pause");
			
			}	
			else
			{
				cout<<"login failed!\n check your username or password and try again"<<endl;
				system("pause");
				main();
				
			}
			
			break;
			case 2:
				Register();
				system("pause");
				main();
break;
			
		}
	
	
}

	
	return 0;
}