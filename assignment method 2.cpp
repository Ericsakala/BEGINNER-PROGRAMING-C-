#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int maxrow=80;
string name[maxrow]={};
string id[maxrow]={};
string category[maxrow]={};
string date[maxrow]={};

void createfile()
{
	string line;
	int i= 0;
	ifstream zhub;
	zhub.open("zdetails.txt",ios::app);
	if(zhub.is_open()){
		string sentence[80];
		while(zhub)
		{
		 int l=line.length();
		 getline(zhub,id[i]);
		  getline(zhub,name[i]);
		   getline(zhub,category[i]);
	
	zhub>>id[i]>>name[i]>>category[i];
	cout<<id[i]<<" "<<name[i]<<" "<<category[i]<<endl;
		i++;
		break;	
		}
	}
		else
		{
			cout<<"error the file couldnt open\n";
		}
		
	}


void addrecord()
{
string cate;	
string Nname;
string passport;
cin.ignore();
cout<<"enter name \n";
getline(cin,Nname);	
cout<<"enter num id/passport\n ";
getline(cin,passport);
cout<<"enter the category\n";
getline(cin,cate);

for(int i=0;i<maxrow;i++)
{
	
	if(id[i]=="\0")
	{
		id[i]=passport;
		name[i]= Nname;
		category[i]=cate;
		break;
	}
	
}

}
void listrecord()
{
system("cls");	
cout<<"current record\n";
	cout<<"*********************************** \n";
	cout<<"ID\tNAME     CATEGORY \n";
	cout<<"*********************************** \n";
	
for(int i=0;i<maxrow;i++)
  {
  	int counter=0;
	if(id[i] != "\0")
	{
			counter++;
	cout<<id[i] << " " << name[i] <<" "<< category[i]<<endl;	
	break;

	}
	if(counter==0)
	{
		cout<<"no record \n";
	break;
	}
}	
	
}

void search(string search)
{
system("cls");
	int counter = 0;
for(int i = 0;i<maxrow;i++)
  {
  
	if(id[i] == search)
	{
	counter++;	
	cout<<id[i]<<"\t"<<name[i]<<"\t"<<category[i]<<"\n";
	break;
	}
	if(counter == 0)
	{
		cout<<"no record \n";
	break;
	}
}	

}
void updaterecord(string search)
{
	
	
	
char name2[50];
char emp[5];
int counter =0;	
	for(int i=0; i < maxrow; i++)
  {
	if(id[i] == search)
	{
	counter++;	
	cout<<"enter the name of employee\n";
	cin.getline(name2,50);
	name[i]=name2;
	cout<<"update successfuly\n";
	break;
	}
	
}	
}

bool deleterecord()
{
	system("cls");
string idcomp;

	ifstream zhub;
	cout<<"enter the id number of a person you want to delete\n";
	getline(cin,idcomp);
zhub.open("zdetails.txt");
	getline(zhub,id[maxrow]);

for(int i=0;i<maxrow;i++)
  	{
	  
	if(idcomp==id[i])
	{
	return 1;
		break;
		

	}
	else 
	{
	return 0;
	break;
	}
	
}
return 1;

}
void saving()
{
	ofstream zhub;
	zhub.open("zdetails.txt",ios::app);
	for(int i = 0;  i< maxrow;i++)
  {
	if(id[i]=="\0")
	{
break;
	}
	else
	{	
	zhub<<id[i]<<" "<< name[i]<<" "<<category[i]<<"\n";
	}

}
zhub.close();	
}

int main(){
	bool status;
	string idnum;
	int option;
	system("cls");
//	createfile();
	do{
	cout<<"1.create record \n";
	cout<<"2.update record \n";
	cout<<"3.delete record \n";
	cout<<"4.search record \n";
	cout<<"5.display all record \n";
	cout<<"6.exitd \n";
	cout<<"************************************************************* \n";
	cout<<"enter your option \n";
	cin>>option;	
	
	switch(option){
		case 1:
			
			addrecord();
			system("cls");
			break;
			case 2:
			cin.ignore();
				cout<<"search employe id you want to update  \n";
					getline(cin,idnum);
					updaterecord(idnum);
					break;
					case 3:
						cin.ignore();
					 status=deleterecord();
					if(status)
		{
		
			for(int i=0;i<maxrow;i++){
					ofstream zhub;
			zhub.open("zdetails.txt",ios::app);
			id[i]=" ";
			name[i]=" ";
			category[i]=" ";
			zhub<<id[i]<<" "<< name[i]<<" "<<category[i]<<"\n";
			}
			}	
			else
			{
				cout<<"login failed!\n check your username or password and try again"<<endl;
				system("pause");
				main();
				
			}
					system("cls");
					break;
				case 4:
					cin.ignore();
					cout<<"search by id \n";
					getline(cin,idnum);
					search(idnum);
					break;
				case 5:
					createfile();
					break;
			
	}	
	}while(option !=6);
	
	saving();
	system("pause");
	cout<<"file saving....\n";
	
	
}