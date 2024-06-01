#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Person{
	private:
	string Name;
	int age;

	public:
		void setName(string);
		void setage(int);
		string getName();
		int getage();
		
		
};

int Person::getage(){
	return age;
}

string Person::getName(){
	return Name;
}

void Person::setName(string a){
	Name=a;
}

void Person::setage(int b){
	age=b;
}
class Tempreature{
	private:
	
	double temp;
	public:
		void settemp(double);
		double gettemp();
		
};
void Tempreature::settemp(double t){
	
	temp=t;
}
double Tempreature::gettemp(){
	return temp;
}



int main(){
	
Tempreature temp2[3];
	double input;
	int i=0;
	do{
		cout<<"enter the tempreature at position "<<(i+1)<<endl;
		cin>>input;
		temp2[i].settemp(input);
		i++;
		
		
	}while(i<3);
	cout<<endl;
	
	int j=0;
	do{
		if(temp2[j].gettemp()<50){
			
					
	cout<<temp2[j].gettemp()<<endl;
		}
	
		j++;
		
		
	}while(j<3);
	
	
	
	
	
	
	
	
	Person student[5];
	Person lecture[5];
string sentence;
//cout<<"enter the sentence\n";
//getline(cin,sentence);
// student.steName(sentence);
// int myage;
// cout<<"eneter your age\n";
// cin>>myage;
// student.setage(myage);
// int i=0;
// cout<<"my name is : "<<student.getName()<<endl;
// cout<<"my age is : "<<student.getage()<<endl;
// 
//int i=0;
//while(i<5)
//{
//	cout<<"enter the name : ";
//	cin>>sentence;
//	student[i].setName(sentence);
//	i++;
//}
// int j=0;
// do{
// 	cout<<student[j].getName()<<endl;
// 	j++;
// }while(j<5);
// 
// 
// 
// 
// 
 return 0;	
}
