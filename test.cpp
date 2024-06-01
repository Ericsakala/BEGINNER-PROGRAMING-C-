
#include <iostream>
using namespace std;
class Person{

private:
string name;
int age;
char gender;
public:
    Person(){

    age=3;
    cout<<" age constructor : "<<age<<endl;
    }
      ~Person(){
    cout<<" i am the distructor : ";
    }
    //setters
 void setname(string);
 void setage(int );
 void setgender(char);
    //getters
 string getname();
 int getage();
 char getgender();

};

void Person::setname(string n){
    name=n;
    }
     void Person::setage(int myage){
     age=myage;
    }
    void Person::setgender(char g){

    gender=g;
    }
string Person:: getname(){
return name;
}
int Person:: getage(){

return age;
}
char Person::getgender(){
return gender;
}


class Area_of_rectangle{
private:
     double width;
     double length;

};
void add(Person a){
a.age=446;

}
int main(){
//Person student; // creating an object of the cLass
//student.name= "raymose";
//student.age=12;// using and object to access the class data using dot.
//student.gender='m';
//cout<<student.name<<endl;
//cout<<student.age<<endl;
//cout<<student.gender<<endl;
//
//Person staff;
//staff.name= "Noreen";
//staff.age=20;
//
//staff.gender='f';
//cout<<staff.name<<endl;
//cout<<staff.age<<endl;
//cout<<staff.gender<<endl;

//Area_of_rectangle rectangle1;
//double area;
//cout<< "enter the width : ";
//cin>>rectangle1.width;
//cout<< "enter the length : ";
//cin>>rectangle1.length;
//area=rectangle1.width*rectangle1.length;
//cout<< " Area  = "<<area;
//
//Person student;
//string studentName;
//int stAge;
//char stGender;
//cout<< "enter name : ";
//cin>>studentName;
//student.setname(studentName);
//cout<< "enter age : ";
//cin>>stAge;
//student.setage(stAge);
//cout<< " enter gender : ";
//cin>>stGender;
//student.setgender(stGender);
//cout<<endl;
//
//cout<<student.getname()<<endl;
//cout<<student.getage()<<endl;
//cout<<student.getgender()<<endl;
//
//
//
Person student;

student.age=36;
}


