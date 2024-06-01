#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int counter;
struct Innovator{

	int id,age;
string firstName,SurName,Title_of_innovation,date,category,nrc;
	
	
	
};


void addinnovator()
{
	Innovator innovator;
	cout<<"enter your first name\n";
	getline(cin,innovator.firstName);	
	cout<<"enter your surname\n";
	getline(cin,innovator.SurName);
	cout<<"enter the tittle of innovation\n";
	getline(cin,innovator.Title_of_innovation);
	cout<<"enter the date submitted\n";
	getline(cin,innovator.date);
	cout<<"enter the category of your innovation \n";
	getline(cin,innovator.category);
	cout<<"enter your age\n";
	cin>>innovator.age;
	cin.ignore();
	cout<<"enter your NRC/PASPORT number\n";
	getline(cin,innovator.nrc);
	counter++;
	
	ofstream file;
	file.open("new record.txt", ios::app);
//	file<<counter<<endl;
	file<<innovator.firstName<<endl;
	file<<innovator.SurName<<endl;
	file<<innovator.age<<endl;
	file<<innovator.nrc<<endl;
	file<<innovator.Title_of_innovation<<endl;
	file<<innovator.category<<endl;
	file<<innovator.date<<endl;
	  file.close();     
	file.open("id.txt");
	file<<counter;
	file.close();
	cout<<"the record has been saved successfully\n";
}
void print(Innovator s){


cout<<"---------------------------------------------------------------------------------------\n";

	cout<<"FIRST NAME               : "<<s.firstName<<endl;
	cout<<"SURNAME                  : "<<s.SurName<<endl;
	cout<<"AGE                      : "<<s.age<<endl;
	cout<<"NRC/PASSPORT             : "<<s.nrc<<endl;
	cout<<"TITLE OF THE THE PROJECT : "<<s.Title_of_innovation<<endl;
	cout<<"CATEGORY                 : "<<s.category<<endl;
	cout<<"DATE                     : "<<s.date<<endl;
cout<<"---------------------------------------------------------------------------------------\n";
cout<<endl;

}

void display()
{
	Innovator innovator;
	ifstream read;
	read.open("new record.txt");
	getline(read,innovator.firstName);
    read>>innovator.firstName;
	read>>innovator.SurName;
	read.ignore();
	read>>innovator.age;
	read>>innovator.nrc;
	read>>innovator.Title_of_innovation;
	read>>innovator.category;
	read>>innovator.date;
	if(!read.eof()){
		read.ignore();
		print(innovator);
getline(read,innovator.firstName);
    read>>innovator.firstName;
	read>>innovator.SurName;
	read.ignore();
	read>>innovator.age;
	read>>innovator.nrc;
	read>>innovator.Title_of_innovation;
	read>>innovator.category;
	read>>innovator.date;
		print(innovator);

}


read.close();
   
}
int search()
{

	int age;
	cout<<"enter innovator NRC\n";
	cin>>age;
	
	Innovator innovator;
	ifstream read;
	read.open("new record.txt");
	read>>innovator.age;
	//read.ignore();
	getline(read,innovator.firstName);
	read>>innovator.firstName;
	read>>innovator.SurName;
	read>>innovator.age;
	read>>innovator.nrc;
	read>>innovator.Title_of_innovation;
	read>>innovator.category;
	read>>innovator.date;
	while(!read.eof())
	{
				if(age!=innovator.age)
				{
				print(innovator);	
					return age;
				}
	read>>innovator.firstName;
	read>>innovator.SurName;
	read>>innovator.age;
	read>>innovator.nrc;
	read>>innovator.Title_of_innovation;
	read>>innovator.category;
	read>>innovator.date;

	}
		read.close();
	return 0;
}
void deletedata()
{
	Innovator innovator;
	int age=search();
	cout<<"you want to delete record(press 1)\n";
	int choice;
	cin>>choice;
	//cin.ignore();
	if(choice==1){
	
	cin.ignore();
	
	cout<<"enter your NRC/PASPORT number\n";
	getline(cin,innovator.nrc);
			ofstream tempfile;
			tempfile.open("temp.txt");
			ifstream read;
			read.open("new record.txt");
				read>>innovator.age;
				read.ignore();
				getline(read,innovator.firstName);
				read>>innovator.firstName;
				read>>innovator.SurName;
				read>>innovator.age;
				read>>innovator.nrc;
				read>>innovator.Title_of_innovation;
				read>>innovator.category;
				read>>innovator.date;
			while(!read.eof())
			{
				if(innovator.age == age)
				{                
					tempfile<<innovator.firstName<<endl;
					tempfile<<innovator.SurName<<endl;
					tempfile<<innovator.age<<endl;
					tempfile<<innovator.nrc<<endl;
					tempfile<<innovator.Title_of_innovation<<endl;
					tempfile<<innovator.category<<endl;
					tempfile<<innovator.date<<endl;	
				}
				
				read>>innovator.age;
				read.ignore();
				getline(read,innovator.firstName);
				read>>innovator.firstName;
				read>>innovator.SurName;
				read>>innovator.age;
				read>>innovator.nrc;
				read>>innovator.Title_of_innovation;
				read>>innovator.category;
				read>>innovator.date;
		   }

			    read.close();
				tempfile.close();
				remove("new record.txt");
				rename("temp.txt", "new record.txt");
				cout<<"data deleted \n";
   }
	else
	{
		cout<<"record not deleted\n";
	}

}
void updaterecord()
{	Innovator innovator;
	int age=search();
	cout<<"you want toupdate record(press 1)\n";
	int choice;
	cin>>choice;
	cin.ignore();
	if(choice==1){
		Innovator newinnovator;
			
	cout<<"enter your first name\n";
	getline(cin,newinnovator.firstName);	
	cout<<"enter your surname\n";
	getline(cin,newinnovator.SurName);
	cout<<"enter the tittle of innovation\n";
	getline(cin,newinnovator.Title_of_innovation);
	cout<<"enter the date submitted\n";
	getline(cin,newinnovator.date);
	cout<<"enter the category of your innovation \n";
	getline(cin,newinnovator.category);
	cout<<"enter your age\n";
	cin>>newinnovator.age;
			ofstream tempfile;
			tempfile.open("temp.txt");
			ifstream read;
			read.open("new record.txt");
				read>>innovator.age;
				read.ignore();
				getline(read,newinnovator.firstName);
				read>>newinnovator.firstName;
				read>>newinnovator.SurName;
				read>>newinnovator.age;
				read>>newinnovator.nrc;
				read>>newinnovator.Title_of_innovation;
				read>>newinnovator.category;
				read>>newinnovator.date;
			while(!read.eof())
			{     
				if(innovator.age == age)
				{     
					tempfile<<innovator.firstName<<endl;
					tempfile<<innovator.SurName<<endl;
					tempfile<<innovator.age<<endl;
					tempfile<<innovator.nrc<<endl;
					tempfile<<innovator.Title_of_innovation<<endl;
					tempfile<<innovator.category<<endl;
					tempfile<<innovator.date<<endl;	
				}
				else
				{
					
					tempfile<<"FIRST NAME        : "<<newinnovator.firstName<<endl;
					tempfile<<"SUR NAME          : "<<newinnovator.SurName<<endl;
					tempfile<<"AGE               : "<<newinnovator.age<<endl;
					tempfile<<"NRC/PASSPORT      : "<<newinnovator.nrc<<endl;
					tempfile<<"INNOVATION TITLE  : "<<newinnovator.Title_of_innovation<<endl;
					tempfile<<"CATEGORY          : "<<newinnovator.category<<endl;
					tempfile<<"DATE SUBMITED     : "<<newinnovator.date<<endl;		
				}
				read>>innovator.age;
				read.ignore();
				getline(read,innovator.firstName);
				read>>innovator.firstName;
				read>>innovator.SurName;
				read>>innovator.age;
				read>>innovator.nrc;
				read>>innovator.Title_of_innovation;
				read>>innovator.category;
				read>>innovator.date;
		   }

			    read.close();
				tempfile.close();
				remove("new record.txt");
				rename("temp.txt", "new record.txt");
				cout<<"dataupdated succesfuly \n";
   }
	else
	{
		cout<<"record not deleted\n";
	}
}
int main(){
	int option;
	ifstream read;
	read.open("id.txt");
	if(!read.fail())
	{
		read>>counter;
	}
	else
	{
		counter=0;
	}
read.close();

while(true){
	cout<<"************************************************************* \n";
	cout<<"1.create record \n";
	cout<<"2.display all record \n";
	cout<<"3.delete record \n";
	cout<<"4.search record \n";
	cout<<"5.update record \n";
	cout<<"6.exitd \n";
	cout<<"************************************************************* \n";
	cout<<"enter your option \n";
	cin>>option;	
	
	switch(option){
		case 1:
			system("cls");
			cin.ignore();
			addinnovator();
			break;
					case 2:
						
						display();
						break;
						case 3:
							
							deletedata();
							break;
				case 4:
					cin.ignore();
					 search();
					break;
				case 5:
				updaterecord();
					break;
			
	}	
}








	return 0;
}