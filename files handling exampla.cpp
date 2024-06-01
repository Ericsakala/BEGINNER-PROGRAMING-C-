#include <iostream>
#include <fstream>
using namespace std;
int main(){
/*	
	ofstream sendf;
	sendf.open("try.txt");
	int numbers =0;
	cout<<"how many numbers do you have\n";
	cin >>numbers;
	sendf<<numbers;
	sendf.close();

*/
	ifstream readf;
	readf.open("try.txt");
	int numbers =0;
	
	if(readf){
		readf>>numbers;
		cout<<(numbers);
	}
	else{
		cout<<"error while open";
	}
	readf.close();
	return 0;
}