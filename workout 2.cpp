#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
	string names[5];
	string grade[5];
	ofstream school;
	school.open("CLASS.txt");
	
	for(int i=0;i<5;i++){
		cout<<"enter your name"<<(i+1)<<endl;
	getline(cin,names[i]);
	}

	for(int i=0;i<5;i++){
		cout <<"enter the grades for each "<<(i+1)<<endl;
		getline(cin, grade[i]);
			
	}	
	for(int i=0;i<=5;i++){
		school<<names[i]<<"\t"<<grade[i]<<endl;
	}
	school.close();
	return 1;
}