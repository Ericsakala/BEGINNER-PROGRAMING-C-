#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void login();
void Register();
void reset();




int main (){

	int a;
	cout<<"\t\t\t------------WELCOME TO A LOGIN PLATFORM--------------------\t\t\t\t \n";
	cout<<"\t\t\t               select your choice                           \t\t\t \n";
	cout<<"\t\t\t     press:                                                 \t\t\t \n";
	cout<<"\t\t\t 1.LOGIN  \n";
	cout<<"\t\t\t 2.REGISTER  \n";
	cout<<"\t\t\t 3.RESET  \n";
	cout<<"enter your option \n";
	cin>>a;
	switch(a){

	case 1:
			{

		        login();
		    	break;
		}
		case 2: {
		 Register();
                break;
		}

       	case 3: {

		  reset();
           break;
		   }

       defult:
       system("cls");
       	    cout<<"\t\t\t you have selected the invalid option\n";
       	break;


	}
	login();{

	int count;
	string username, password,id,pass;
	system ("cls");
	cout<<"enter your user name and password \n";
	cout<<"USER NAME \n";
	cin>>username;
	cout<<"PASSWORD \n";
	cin>>password;
	ifstream input("record.txt");
	while(input>>id>>pass){
		if(id==username && pass==password){
			count =1;
			system ("cls");
		}

	input.close();}
		if(count==1){
		cout<<username<<"LOGIN SUCCESSFUL,  thank you \n";
		main();
		}
		else
		{
			cout<<"longin eror\n please check your user name or password \n";
			main();
		}
	}

 Register();
{
string username, password,rid,pass;
    system ("cls");
	cout<<"enter your user name and password \n";
	cout<<"USER NAME \n";
	cin>>username;
	cout<<"PASSWORD \n";
	cin>>password;
	ofstream h1("recor.txt", ios::app);
	h1<<username<<' '<<password<<endl;
	system("cls");
	cout<<"registration succesfull \n";
	main();

				}

void reset();
	{
		int option;
		system("cls");
		cout<<"press 1 to search for your is \n";
		cout<<"pree 2 to go to main menu b\n";
		cout<<"enter your choice \n";
		cin>>option;
		switch(option){

		case 1:{
			int count=0;
			string username, rid,pass;
			cout <<"ernter the user name you remember \n";
			cin>>username;
			ifstream h1("record.txt");
			while(h1>>rid>>pass){
				if(rid==username){
					count=1;
				}
				h1.close();
				if(count==1){
					cout<<"your account has found \n";
					cout<<"you password is: "<<pass<<endl;
					main();
				}
				else
				{
					cout<<"sorry no account found \n";
				}

		}

break;
		}
		case 2:{
			main();
			break;
		}
	 	default:
			cout<<"try again \n";
			reset();

	}
}
return 0;
}
