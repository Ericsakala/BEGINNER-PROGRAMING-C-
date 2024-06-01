#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person {
	string Name;
	int Mark[6],SID,CS_110,MA_110,CS_131,CH_110,LA_11,PH_110;
	string Grade[20];
};
void getStudentData(){
	
	Person student;
	
	cout<<"enter student name : ";
	getline(cin,student.Name);
	cout<<"enter the student ID : ";
	cin>>student.SID;
	cout<<endl;
	cout<<"Enter the gmark according to the following course formart\n";
	cout<<"1.CS_110\n";
	cout<<"2.MA 110\n";
	cout<<"3.CS 131\n";
	cout<<"4.CH 110\n";
	cout<<"5.LA 111\n";
	cout<<"6.PH 110\n";
	fstream file;
		file.open("students.txt",ios::app);
		
	for(int i=0;i<6;i++){
	cout<<"enter the marks "<<(i+1)<<endl;
	cin>>student.Mark[i];
	if(student.Mark[i]>=86 &&student.Mark[i]<=100)
		{
		student.Grade[i]=="A+";
		file<<student.Grade[i]<<",";
	    }
	    else if(student.Mark[i]>=75 &&student.Mark[i]<=85)
		{
		student.Grade[i]=="A";
		file<<student.Grade[i]<<",";
	}
	   else if(student.Mark[i]>=65 &&student.Mark[i]<=74)
		{
		student.Grade[i]=="B+";
			file<<student.Grade[i]<<",";
	
	    }
	   else if(student.Mark[i]>=60 &&student.Mark[i]<=64)
		{
		student.Grade[i]=="B";
			file<<student.Grade[i]<<",";
	
	    }
	   else if(student.Mark[i]>=55 &&student.Mark[i]<=59)
		{
		student.Grade[i]=="c+";
			file<<student.Grade[i]<<",";
	
	    }
	   else if(student.Mark[i]>=50 &&student.Mark[i]<=54)
		{
		student.Grade[i]=="C";
			file<<student.Grade[i]<<",";
	
	    }
	    else if(student.Mark[i]>=45 &&student.Mark[i]<=49)
		{
		student.Grade[i]=="D+";
			file<<student.Grade[i]<<",";
	
	    }
	    else if(student.Mark[i]>=0 &&student.Mark[i]<=44)
		{
		student.Grade[i]=="D";
			file<<student.Grade[i]<<",";
	
	    }
		
	}
	
	file.close();
	
	
}

	

int main(){
	
	 
getStudentData();	
	
	return 0;
}
