#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int counter=0;
struct Person {
	string Name,record,g1,g2,g3,g4,g5,g6,SID;
	int Mark,CS_110,MA_110,CS_131,CH_110,LA_111,PH_110;

};

string markConvertor (int Mark){

if(Mark>=86 &&Mark<=100)
		{
			return "A+";
		//file<<student.grade;

	    }
	    else if(Mark>=75 &&Mark<=85)
		{
			return "A";
	}
	   else if(Mark>=65 &&Mark<=74)
		{
		return "B+";


	    }
	   else if(Mark>=60 &&Mark<=64)
		{
		return"B";


	    }
	   else if(Mark>=55 && Mark<=59)
		{
	return "C+";


	    }
	   else if(Mark>=50 &&Mark<=54)
		{

		return "C";


	    }
	    else if(Mark>=45 &&Mark<=49)
		{
	 return "D+";


	    }
	    else if(Mark>=0 &&Mark<=44)
		{
	return "D";


	    }else{
	    	cout<<"invalid input\n";
		}
//	return " ";
}
void readFromFile(Student students[], Course courses[]) {
    ifstream infile("grades.txt");
    if (infile.is_open()) {
        int studentIndex = 0;//counter variable to keep track of the while loop..
        string tempFile;
          getline(infile,tempFile);
        while (getline(infile, tempFile)) {
            stringstream parser(tempFile);
            string token;
            // Read name and student number..
            getline(parser, token, ',');
            students[studentIndex].name = token;
            getline(parser, token, ',');// it works with commas in a text file to read through
           // students[studentIndex].studentNumber = stoi(token);
            // Read marks for each course and generate the grades
            for (int i = 0; i < 6; ++i) {
                getline(parser, token, ',');
                int mark = stoi(token);
                students[studentIndex].grades[i] = calculateGrade(mark); // generate grade letter
            }
            studentIndex++;
            if (studentIndex >= 10) {
                break; // Stop reading if we've reached 10 students
            }
        }
        infile.close();
    } else {
            cout << "Failed to open file." << endl;
    }
}

void getStudentData(){


	Person student;
	string Grade;
	ofstream file;
	file.open("grades.txt",ios::app);
	ofstream nameFiles;
	nameFiles.open("names.txt",ios::app);


	cout<<"enter the student name"<<endl;
	getline(cin,student.Name);

	cout<<"enter the student ID number"<<endl;
	cin>>student.SID;

	cout<<"enter the marks for CS 110"<<endl;
	cin>>student.CS_110;
	student.g1=markConvertor (student.CS_110);


	cout<<"enter the marks for MA 110"<<endl;
	cin>>student.MA_110;
	student.g2 =markConvertor (student.MA_110);


	cout<<"enter the marks for CS 131"<<endl;
	cin>>student.CS_131;
	student.g3=markConvertor (student.CS_131);



	cout<<"enter the marks for CH 110"<<endl;
	cin>>student.CH_110;
    student.g4=markConvertor (student.CH_110);


	cout<<"enter the marks forLA 111"<<endl;
	cin>>student.LA_111;
	student.g5= markConvertor (student.LA_111);


	cout<<"enter the marks for PH 110"<<endl;
	cin>>student.PH_110;
	student.g6= markConvertor (student.PH_110);
//	student.record=student.Name+", "+student.SID+", "+student.g1+", "+student.g2+", "+student.g3+", "+student.g4+", "+student.g5+", "+student.g6;
     counter ++;
//	file<<student.record<<endl;
nameFiles<<"  "<<endl;
    nameFiles<<student.Name<<endl;
	file<<student.SID<<endl;
	file<<student.g1<<endl;
	file<<student.g2<<endl;
	file<<student.g3<<endl;
	file<<student.g4<<endl;
	file<<student.g5<<endl;
	file<<student.g6<<endl;
	file.close();
	nameFiles.close();
	ofstream id;
	id.open("counter.txt");
	id<<counter;
	id.close();




	file.close();
}



void Header(){
string header="NAME SID, CS_110, MA_110, CS_131, CH_110, LA_111, PH_110";
 fstream file;
file.open("grades.txt");
	file<<header<<endl;
 file.close();

}
void print(Person s){
	//cout<<s.record<<" ";
    cout<<s.Name<<"   ";
	cout<<s.SID;
   	cout<<endl;
//	cout<<s.g1<<" ";
//	cout<<s.g2<<" ";
//	cout<<s.g3<<" ";
//	cout<<s.g4<<" ";
//	cout<<s.g5<<" ";
//	cout<<s.g6<<" ";
//	cout<<endl;




}
void ResultsPrint(Person results){

cout<<" -------------------------------------------------------------------------------------------"<<endl;
cout<<"|                          THE COPPERBELT UNIVERSITY                                        |"<<endl;
cout<<"|-------------------------------------------------------------------------------------------|"<<endl;
cout<<"|                          School of Mathematics NQ                                         |"<<endl;
cout<<"|-------------------------------------------------------------------------------------------|"<<endl;
cout<<"| Results slip for: "<<results.Name<<" Student Number : "<<results.SID<<"    "<<endl;
cout<<"|-------------------------------------------------------------------------------------------|"<<endl;
cout<<"|                                                                                           |"<<endl;
cout<<"| CS 110  "<<results.g1<<"      MA 110   "<<results.g2<<"         CS 131   "<<results.g3<<"		    |"<<endl;
cout<<"| CH 110  "<<results.g4<<"      LA 111   "<<results.g5<<"         PH 110   "<<results.g6<<" 		    |"<<endl;
cout<<"|-------------------------------------------------------------------------------------------|"<<endl;
}
void readData(){

	Person student;
	ifstream read;
	ifstream read2;
	read2.open("names.txt");
	read.open("grades.txt");
	int i=0;
	while(!read.eof()){
		//read>>counter;
		//read.ignore();
	//read>>student.record;
    	getline(read2,student.Name);
    	read>>student.SID;
		read.ignore();

		read>>student.g1;
		read>>student.g2;
		read>>student.g3;
		read>>student.g4;
		read>>student.g5;
		read>>student.g6;
		read.ignore();
        read.ignore();

		print(student);
	}




}

bool search(){

string idsearch;
cout<<"enter student ID number you want to print the results"<<endl;
getline(cin,idsearch);
	Person student;
	ifstream read;
	read.open("grades.txt");
	ifstream read2;
	read2.open("names.txt");

	while(!read2.eof()){
		read2>>student.Name;
	}

	while(!read.eof()){

    	read>>student.SID;
		read.ignore();
		read>>student.g1;
		read>>student.g2;
		read>>student.g3;
		read>>student.g4;
		read>>student.g5;
		read>>student.g6;
read.ignore();

	}

if(idsearch==student.SID){
	ResultsPrint(student);
	return 1;
}
else{
	//ResultsPrint(student);
	return 0;
}
return 1;

}

void Exit();

int main(){

	 ifstream read;
    read.open("counter.txt");
    if (!read.fail()) {
        read >> counter;
    }
	else {
        counter = 0;
    }
    read.close();
	string header;
//	getStudentData();
readData();
int choice;
cout<<endl;
do{
cout<<"1.PRINT RESULTS SLIP\n";
cout<<"2.EXIT\n";
cout<<"enter the your choice \n";
cin>>choice;
cin.ignore();

switch(choice){
	case 1:
		system("cls");
	search();
	break;
	case 2:
		system("cls");
		system("sleep");
cout<<"exit";
	break;
	default:
	cout<<" INVALID INPUT!\n";
}
}while(choice!=2);






return 0;
}
