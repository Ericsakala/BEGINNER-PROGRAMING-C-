#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int counter;
struct Innovator{
	int id;
string firstName,SurName,Title_of_innovation,date,category,nrc,age;
	
	
	
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
	getline(cin,innovator.age);
	cin.ignore();
	cout<<"enter your NRC/PASPORT number\n";
	getline(cin,innovator.nrc);
	counter++;
	
	ofstream file;
	file.open("new record.txt",ios::app);
	file<<counter<<endl;
	file<<innovator.firstName<<endl;
	file<<innovator.SurName<<endl;
	file<<innovator.age<<endl;
	file<<innovator.nrc<<endl;
	file<<innovator.Title_of_innovation<<endl;
	file<<innovator.category<<endl;
	file<<innovator.date<<endl;
	      
	file.open("zhub.txt");
	file<<counter<<endl;
	file.close();
}
void print(Innovator s){
	for(int i=0;i<counter;i++){
	
	cout<<s.firstName<<endl;
	cout<<s.SurName<<endl;
	cout<<s.age<<endl;
	cout<<s.nrc<<endl;
	cout<<s.Title_of_innovation<<endl;
	cout<<s.category<<endl;
	cout<<s.date<<endl;
counter++;
}
}
void display()
{
	Innovator innovator;
	ifstream read;
	read.open("new record.txt");
	
	while(!read.eof()){
	
getline(read,innovator.firstName);
getline(read,innovator.SurName);
getline(read,innovator.age);
getline(read,innovator.nrc);
getline(read,innovator.Title_of_innovation);
getline(read,innovator.category);
getline(read,innovator.date);
for(int i=0;i<counter;i++){
	
	cout<<innovator.firstName[i];
	cout<<innovator.SurName[i];
	cout<<innovator.age[i];
	cout<<innovator.nrc[i]<<endl;
	cout<<innovator.Title_of_innovation[i]<<endl;
	cout<<innovator.category[i]<<endl;
	cout<<innovator.date[i]<<endl;

	
}
//    read>>innovator.firstName;
//	read>>innovator.SurName;
//	read>>innovator.age;
//	read>>innovator.nrc;
//	read>>innovator.Title_of_innovation;
//	read>>innovator.category;
//	read>>innovator.date;
//	print(innovator);


}
read.close();
   
}
void search()
{

	string age;
	cout<<"enter innovator NRC\n";
	getline(cin,age);
	
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

}
void deletedata()
{
	Innovator innovator;
	string age= search();
	cout<<"you want to delete record(press 1)\n";
	int choice;
	cin>>choice;
	//cin.ignore();
	if(choice==1){
	
	
	
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
	string age=search();
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