#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void password_hashing(string name){
		int pass[20];
	ofstream file;
	file.open("passHash");
	
	for(int i=0;i<name.length();i++){
	pass[i]=(int)name[i];	
	}
	for(int i=0;i<name.length();i++){
		file<<pass[i];
		
	
	}
	file.close();
}

void decrypt(){	
string name;
	ifstream file;
	file.open("passHash");
	getline(file,pass[20]);
		for(int i=0;i<name.length();i++){
		
		
		cout<<(char)pass[i];
	}
	
}
int main (){
	cout<<"enter the password\n";
	getline(cin,name);

	
	cout<<endl;
	
	
	
	
	return 0;
	
}
