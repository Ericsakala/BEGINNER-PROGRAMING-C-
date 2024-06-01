#include <iostream>
#include <string>
using namespace std;
int main (){
	
	string name;
	int num;
	cout<<"enter your name\n";
	getline(cin,name);
	cout<<"enter the number of times you want your name to be displayed \n";
	cin>>num;
	int counter=0;

while(counter<num){
cout<<name<<endl;
counter++;	
}
}