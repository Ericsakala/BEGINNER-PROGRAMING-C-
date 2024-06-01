#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void getUserData(){
	int mark;
	char grade;
	string name;
	cout<<"enter your name\n";
	getline(cin,name);
	
	cout<<"enter your marks\n";
	cin>>mark;
	if(mark>=86&&mark<=100){
		grade='A';
	}
	cout<<name<<" "<<grade;
}
class person{
	
	string name;
	string sirname;
	public:
	void user(){
		cout<<"enter your name\n";
		cin>>name;
		
	}
	string setName(string);
};

int main(){
	person person1;
	person1.setName("eric");
	
}

