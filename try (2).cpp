#include <iostream>
using namespace std;
class Person{
	private:
		//declaring three private member variables, two are pointers and one is a literal;
		int *age;
		char*gender;
		string name;
		
		
		public:
		//creating public methods for the class	
		//the function receives two parameters of 1 integer and 1 character.
		void setgender(char c){ 
		//dynamically allocating memory for two variables
			
			//gender=new char();
			gender=&c;
		}
			void setage(int a){
			//=new int(); 
			age=&a;	
			} 
		void setnName(string s){
			name=s;
		}
string getName(){
	return name;
}
int getAge(){
	return *age; //returning the original value found where the pointer is pointing to.
}
char getGender(){
	return *gender;//returning the original value found where the pointer is pointing to.
}
//creating a constructor which initialise the age
Person(int b=1){
	age=new int();
	age=&b;
}
//creating a distructor to clear the used memory to avoid memory leak.
~Person(){
	delete  age;
	age=NULL;
	delete gender;
	gender=NULL;
}
friend void print( ); //creating a friend function that can access all the members in this class.


};

void print (){
	Person *student; //creating an object of the class
	string myname;
	char mygender;
	int myage;
	
	student =new (Person); //dynamically allocating new memory for the object
	
	cout<<"enter your name\n";
	getline(cin,myname);
	student->setnName(myname);
	
	cout<<"enter your age\n";
	cin>>myage;
	cin.ignore();
	
	cout<<"enter your genger either M/F\n";
	cin>>mygender;
	student->setage(myage);
	student->setgender(mygender);
	
	//prining out results gotten from the user
	cout<<"my name is : "<<student->getName()<<endl;
	cout<<"Age        : "<<student->getAge()<<endl;
	cout<<"Gender     : "<<student->getGender();
}

int main() {
//print();//calling the print function.
 int rows,columns;
 string myname;
	char mygender;
	int myage;
	
 cout<<"enter the rows of the table : "; cin>>rows;
 cout<<"enter the columns of the table : ";cin>>columns;
 cin.ignore();
Person **lecturer=new Person*[rows];
for(int i=0; i<rows;i++){
	lecturer[i]=new Person[columns];
	cout<<"enter first lecturer  name :";getline(cin,myname);
	cout<<"enter the recturer age : ";cin>>myage;
	cin.ignore();
	cout<<"enter the lecturers gender : ";cin>>mygender;
	lecturer[i]->setnName(myname);
	lecturer[i]->setage(myage);
	lecturer[i]->setgender(mygender);
	cin.ignore();
}
cout<<endl;
cout<<"test";
for(int i=0; i<rows;i++){
	cout<<"Name : "<<lecturer[i]->getName()<<endl;
	cout<<"Age  : "<<lecturer[i]->getAge()<<endl;
	cout<<"Gender:"<<lecturer[i]->getGender()<<endl;
	
}


return 0;
}