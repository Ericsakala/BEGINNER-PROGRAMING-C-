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
		cin>>names[5];
		school<<names[i];
	}

	school.close();
	return 0;
}
