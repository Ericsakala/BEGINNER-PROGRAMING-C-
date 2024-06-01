#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void deleterecord()
{
ifstream file;
file.open("details.txt",ios::app);	
	int num,age;
string firstName,SurName,Title_of_innovation,date,category,nrc,id;
cout<<"enter the id for innovator you want to delete\n";
getline(cin,id);
while(getline(file,nrc)&&getline(file,firstName)){
if(id==nrc)
	{
		nrc=" ";
		firstName=" ";
	}
	ofstream file;
	file.open("details.txt",ios::app);
	
	file<<firstName<<endl;
	file<<nrc<<endl;
	file.close();
}
file.close();
}