#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void  Regist()
{
        string username, password,rid,pass;
        system ("cls");
	cout<<"enter your user name and password \n";
	cout<<"USER NAME \n";
	cin>>username;
	cout<<"PASSWORD \n";
	cin>>password;
	ofstream h1("record.txt", ios::app);
	h1<<username<<' '<<password<<endl;
	system("cls");
	cout<<"registration succesfull \n";
int	main();

		}

void  rese(){
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
				int	main();
				}
				else
				{
					cout<<"sorry no account found \n";
				}
			break;
		}


		}
		case 2:{
			int main();
			break;
		}
	 	default:
			cout<<"try again \n";
			rese();

	}
}



int main (){

	int a;
	cout<<"\t------------WELCOME TO A LOGIN PLATFORM--------------------\t\t\t\t \n";
	cout<<"\t               select your choice                           \t\t\t \n";
	cout<<"\t     press:                                                 \t\t\t \n";
	cout<<"\t 1.LOGIN  \n";
	cout<<"\t 2.REGISTER  \n";
	cout<<"\t 3.RESET  \n";
	cout<<"enter your option \n";
	cin>>a;
	switch(a){

	case 1:
			{

		        log();
		    	break;
		}
		case 2: {
		 Regist();
                break;
		}

       	case 3: {

		  rese();
           break;
		   }

       default:
       system("cls");
       	    cout<<"\t\t\t you have selected the invalid option\n";
       	break;


	}



return 0;
}
