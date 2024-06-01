#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
class Student{
	public:
	string name,course,yearofstudy;
int studentID,NRC,age;
virtual void add();	
};
//defining function declared in class
void Student::add(){
name="eric";
	cout<<name;	
}
class pupil:public Student{
public:
	void add(){
		name="my friend";
		cout<<name;
	}
};
 int main()
 {
//Student student1;
//cout<<"enter the name of the student :";
//cin>>student1.name;
//cout<<student1.name;

Student *user=new pupil;
user->add();


}
