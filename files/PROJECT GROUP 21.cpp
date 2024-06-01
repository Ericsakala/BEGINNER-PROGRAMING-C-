#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Person {
	string Name,grade;
	int Mark,SID,CS_110,MA_110,CS_131,CH_110,LA_111,PH_110;

};

void markConvertor (int Mark){
	Person student;
	string Grade;
	ofstream file;
	file.open("grades.txt",ios::app);
	
if(Mark>=86 &&Mark<=100)
		{
			student.grade="A+, ";
		file<<student.grade;
	
	    }
	    else if(Mark>=75 &&Mark<=85)
		{
			file<<"A, ";
	}
	   else if(Mark>=65 &&Mark<=74)
		{
		file<<"B+, ";
			
	
	    }
	   else if(Mark>=60 &&Mark<=64)
		{
		file<<"B, ";
			
	
	    }
	   else if(Mark>=55 && Mark<=59)
		{
	file<<"C+, ";
		
	
	    }
	   else if(Mark>=50 &&Mark<=54)
		{
			
		file<<"C, ";
			
	
	    }
	    else if(Mark>=45 &&Mark<=49)
		{
	 file<<"D+, ";
			
	
	    }
	    else if(Mark>=0 &&Mark<=44)
		{
	file<<"D, ";
			
	
	    }else{
	    	cout<<"invalid input\n";
		}	
	
}
void getStudentData(){

	Person student;
	ofstream file;
	file.open("grades.txt",ios::app);
	

	
	cout<<"enter the student name"<<endl;
	getline(cin,student.Name);
	file<<student.Name<<", ";
	cout<<"enter the student ID number"<<endl;
	cin>>student.SID;
	file<<student.SID<<", ";
	cout<<"enter the marks for CS 110"<<endl;
	cin>>student.CS_110;
	markConvertor (student.CS_110);
	cout<<"enter the marks for MA 110"<<endl;
	cin>>student.MA_110;
	markConvertor (student.MA_110);
	cout<<"enter the marks for CS 131"<<endl;
	cin>>student.CS_131;
	markConvertor (student.CS_131);
	cout<<"enter the marks for CH 110"<<endl;
	cin>>student.CH_110;
	markConvertor (student.CH_110);
	cout<<"enter the marks forLA 111"<<endl;
	cin>>student.LA_111;
	markConvertor (student.LA_111);
	cout<<"enter the marks for PH 110"<<endl;
	cin>>student.PH_110;
	markConvertor (student.PH_110);
}

 

void Header(){
string header="NAME SID, CS_110, MA_110, CS_131, CH_110, LA_111, PH_110";
 fstream file;
file.open("grades.txt");
	file<<header<<endl;
 file.close();
 	
}

void readData(){
	
	Person student;
	ifstream read;
	read.open("grades.txt");
	while(!read.eof()){
		getline(read,student.Name);
		read>>student.SID;
	}
	
}

int main(){
	string header;
	
	
	getStudentData();

     fstream read;
	read.open("grades.txt");

	
	
	while(!read.eof()){
	
read>>header;
	if(header=="NAME SID, CS_110, MA_110, CS_131, CH_110, LA_111, PH_110"){
		
	}
	else{
		Header();
		//	file<<header;
	}
	read.close();
}
return 0;
}
