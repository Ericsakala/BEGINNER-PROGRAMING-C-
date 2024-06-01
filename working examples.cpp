#include <iostream>
#include <memory>//for using smart pointers
#include "Sum.h" //for accessing class header file
#include <cstring>//for some string functions
#include <cstdlib>//for some manipulations
using namespace std;

//creating methods for the setters and the getters
void sum::seta(int num1){
	a=num1;
}
void sum::setb(int num2){

 b=num2;	


}
int sum::getanswer()const{
	int c=a+b;
	return c;
}


class myCar{
	private:
		char *name;
		char *year;
		
	public:
		myCar( char *s, char *n);
		
		~myCar();
		
		
		void *setname(char* a){
			
			name=new char[strlen(a)+1];
			strcpy(name,a);
			
		}
		void *setyear(char *b){
		year=new char[strlen(b)+1];
			strcpy(year,b);
			
		}
		
	const	char  *getname(){
			return name;
		}
		
		const char *getyear(){
			return year;
		}
		
};

int main()
{
	myCar *toyota;
	


//	toyota->setname();
	cout<<toyota->getname();
	
	//using pointers to create an object
sum *add1=NULL;
add1=new sum;

int num1,num2;

cout<<"enter the the first number : ";
cin>>num1;
cout<<"enter the second number : " ;
cin>>num2;
add1->seta(num1);//seting data to a variable 'a'.
add1->setb(num2);//seting data to the variable 'b'.
cout<<" sum = "<<add1->getanswer();
delete add1;//deleting allocated unused chuck after the task completed.
add1=NULL;
cout<<endl;
cout<<endl;


//without using pointers
sum add;
cout<<"enter the the first number : ";
cin>>num1;
add.seta(num1);//seting data to a variable 'a'.
cout<<"enter the second number : " ;
cin>>num2;
add.setb(num2);//seting data to the variable 'b'.
cout<<" sum = "<<add.getanswer();
cout<<endl;
cout<<endl;


//using smart pointers
unique_ptr<sum>add2(new sum);
cout<<"enter the the first number : ";
cin>>num1;
add2->seta(num1);//seting data to a variable 'a'.
cout<<"enter the second number : " ;
cin>>num2;

add2->setb(num2);//seting data to the variable 'b'.
cout<<" sum = "<<add2->getanswer();

return 0;	
}