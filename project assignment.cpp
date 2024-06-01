#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void displayMenu(int);
void login(int);
void credentials(string, string,int,string,string,string,string,string );

int main ()
{   
    cout<<"1:manager"<<endl;
    cout<<"2:cordinator"<<endl;
    cout<<"3:Technician"<<endl;
    
     int option=0;
     cout<<"select your position \n";
     cin>>option;
     login(option);
     
  int age=0;
      string first_name,surname, ID,date,status,innovation,title;
  
      
      cout<<"enter your first name\n";
      cin>>first_name;
      cout<<"enter your surname\n";
      cin>>surname;
      cout<<"enter your your NRC/passport number"<<endl;
      cin>>ID;
      cout<<"enter your age \n";
      cin>>age;
      cout<<"enter your innovation title\n";
      cin>>title;
      cout<<"enter date submitted\n";
      cin>>date;
      cout<<"enter petent status\n";
      cin>>status;
      cout<<"enter innovation\n";
      cin>>innovation;
      
      //system("clear");
      
      credentials(first_name,surname,age,ID,title,date,status,innovation);
      
      /*nt wait=0;
      
      //while(wait <=1000000000000)
      {
      	cout<<"please wait this may take up to a few second\n";
      	break;
      }*/
      
      
	cout<<"1: Add innovator"<<endl;
	cout<<"2: Delete innovator"<<endl;
	cout<<"3: search for an innovator\n";
	cout<<"4: Edit pupil innovator"<<endl;
	cout<<"5: Display innovator record\n";
	cout<<"6: Exit"<<endl;
	
		int choice;
	cout<<"select from the main menu\n";
	cin>>choice;
	//system("clear");
	displayMenu(choice);
	
	return 0;
}
//this is the login function
     void login(int option )
     {
     	switch(option)
     	{
     		case 1:
     		cout<<"1:you'r the manager"<<endl;
     		break;
     		case2:
     		cout<<"2:you're the cordinator"<<endl;
     		break;
     		case 3:
     		cout<<"3:you're the technicianint";
			  age=0;
			 
      string first_name="  ",surname=" ", ID="  ",date=" ",status="  ",innovation="  ",title=" " <<endl;
     		break;
     		default:
     		cout<<"invalid option"<<endl;
     	}
     
  
     }
     
//this function displys the main menu
    void displayMenu(int choice)
    
    {
   switch(choice)
	{
		
		case 1:
	cout<<"your choice is to add innovator";
	break;
	
	case 2:
	cout<<"your choice is to delete innovator";
	break;
	
	case 3:
	cout<<"your choice is to search for an innovator";
	
	case 4:
	cout<<"your choice is to edit pupil innovator";
	break;
	
	case 5:
	cout<<"your choice is display innovator's record";
	break;
	
	case 6:
	cout<<"your choice was to exist";
	break;
	
	default :
	cout<<"invalid choice the sytem will now be termitted thank you";
	break;
	}
	
	}
	//this is the login function
	void credentials(string first_name,string  surname, int age,string ID,string title,string date,string status, string innovation )
	
	{
		
		cout<<"    " <<"your first name is: "<<first_name<<endl;
		cout<<"your surname is: "<<surname<<endl;
		cout<<"Your NRC/passport is: "<<ID<<endl;
		cout<<"you'r "<<age<<"years old"<<endl;
		cout<<"The title of innovation is: "<<title<<endl;
		cout<<"you submitted on: "<<date<<endl;
		cout<<"patent status is: "<<status<<endl;
		cout<<"innovation is: "<<innovation<<endl;
		
}