#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
	
	cout<<"whats your favourite programming language \n";
	string language;
	cin>>language;
	ofstream file("language.txt");
	file<<language;
	cout<<"yourr language id "<<language;
	file.close();
	
	
	
	return 0;
}