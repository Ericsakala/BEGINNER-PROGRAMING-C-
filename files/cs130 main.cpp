//cs130 project
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AddRecord.h"
using namespace std;

//int counter;
int main(){
	ifstream file;
	file.open("tracker.txt");
	if(!file.fail()){
		file>>counter;
	}
	else{
		counter=0;
	}
int opt;
bool see =false;
	do{
	
			system("Color 1F");					//displaying user menu colour
	cout<<"            -------------------------------------------------------------------------------------------------\n";
	cout<<"            *****************************|  Welcome to E M S E C Tollgate System!    |**************************\n";
	cout<<"            -------------------------------------------------------------------------------------------------\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          1.ADD RECORD                                                                          |\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          2.DISPLAY ALL RECORD                                                                  |\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          3.SEARCH RECORD                                                                       |\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          4.EXIT                                                                                |\n";
	cout<<"            |------------------------------------------------------------------------------------  ----------|\n";


	cout <<" \tPlease select option :";
	try{
		

	cin >>opt;
	if(opt){
	see=true;
		switch(opt){
			system("cls");
			case 1:
			record();
			break;
			case 2:
				system("cls");
				display();
				break;
				case 3:
					system("cls");
			
					
					search();
					break;
					case 4:
						cout<<"exiting........";
						system("pause");
						system("cls");
						
						
						main();
						break;
						default:
							cout<<"wrong entry please reenter again\n";
							main();
							break;
		
		}
	}
	else{
		
	throw 555;
	}
}

catch(int i)
{
	
	
		cout<<"Error "<<i<<" ! \n"<<"you pressed the wrong key";
	system("pause");
		
	break;
}

	


	
	}while(opt!=4 && see==true && opt!=isalpha(opt)	);
	
}

