#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
bool log()
{
		int count;
		string user,pass,password,username,temp;

		system ("cls");
cout<<"Enter username\n";
cin>>user;
	cout<<"Enter Password \n";
	cin>>pass;
		ifstream input("record.txt");
		getline(input,username);
		getline(input,password);
		if(user==username && pass==password)
		{
		return 1;	
		}
		else
		{
			return 0;
		}
	
		input.close();
		

}

void Reg()
{
		string username, password,rid,pass;
		system ("cls");
		cout<<"enter your user name and password \n";
		cout<<"USER NAME \n";
		cin>>username;
	cout<<"PASSWORD \n";
	cin>>password;
		ofstream h1("recor.txt", ios::app);
		h1<<username<<endl;h1<<password<<endl;
		system("cls");
		cout<<"registration succesfull \n";
		int main();
		h1.close();
}

void res()
{
		int option;
		system("cls");
		cout<<"press 1 to search for your is \n";
		cout<<"pree 2 to go to main menu b\n";
		cout<<"enter your choice \n";
		cin>>option;
		switch(option) {

				case 1:
						int count=0;
						string username, rid,pass;
						cout <<"ernter the user name you remember \n";
						cin>>username;
						ifstream h1("record.txt");
						while(h1>>rid>>pass) {
								if(rid==username) {
										count=1;
								}
								h1.close();
								if(count==1) {
										cout<<"your account has found \n";
										cout<<"you password is: "<<pass<<endl;
										int main();
								} else {
										cout<<"sorry no account found \n";
								}

						}
						break;
//	 	default:
//			cout<<"try again \n";
//			res();
//		break;
		}
}


int main ()
{

		int a;
		
		cin>>a;
		switch(a) {

				case 1:

					bool status=log();
					if(status){
						cout<<"logingin successiful\n";
						system("pause");
					}
					else
					{
						cout<<"wrong username or password\nplease re-enter your details \n";
						system("pause");
						main();
					}
						break;

				case 2:
						Reg();
						break;


				case 3:

						res();
						break;


				default:
						system("cls");
						cout<<"\t\t\t you have selected the invalid option\n";
						break;


		}


		return 0;
}