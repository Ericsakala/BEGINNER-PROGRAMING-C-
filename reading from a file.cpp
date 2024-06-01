#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	
	
	ifstream pupils;
	pupils.open("names.txt");
	string students;
	
	
	while(getline(pupils,students)){
		
		cout<<students<<endl;
		
	}
	
	
	pupils.close();
	
	
	return 0;
}