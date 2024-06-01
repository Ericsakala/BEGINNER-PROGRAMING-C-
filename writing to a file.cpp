#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string name[3];
	string clas[3];
	string age[3];

	ofstream list;


	list.open("names.txt");
cout<<"enter your name age and class int the order below \n";
list<<"NAME\t\tAGE\t\tCLASS"<<endl;

	for(int i=0;i<3;i++){
		cout<<"enter the name "<<(i+1)<<endl;
		getline(cin, name[i]);"\n";

	}
	for(int i=0; i<3; i++){

	cout<<"enter the age "<<(i+1)<<endl;
	getline(cin, age[i]);"\n";

		}
	for(int i=0;i<3;i++){
		cout<<"enter the class "<<(i+1)<<endl;
	getline(cin, clas[i]);"\n";
			
		}




	for(int i=0;i<3;i++){

				list<<name[i]<<"\t\t"<<age[i]<<"\t\t"<<clas[i]<<endl;


	

	}


	list.close();

	return 0;
}
