#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void firstNames(){
	cout<<"\n this programme accepts four first names \n";
	string names[4];
	for(int i=0;i<4;i++){
		cout<<"enter the name # "<<(i+1)<<endl;
		cin>>names[i];
	
	}
		cout<<endl;
		
	for(int i=0;i<4;i++){
		cout<<(i+1)<<". "<<names[i]<<endl;
	}
}
void NamesToFile(){
	string name[4];
		ofstream names;
		names.open("firstnames.txt");
		for(int i=0;i<4;i++){
		cout<<"enter the name # "<<(i+1)<<endl;
	cin>>name[i];
	
	}
		
	for(int i=0;i<4;i++){
		names<<(i+1)<<". "<<name[i]<<endl;
	}	
	names.close();
}
void months(){
	int number;
cout<<"\n this programme print out the mounth when you enter the number of a particular month \n";	
cout<<"enter the number of the month\n";
	cin>>number;
	switch(number){
		case 1:
		cout<<"JANUARY";
		break;
			case 2:
				cout<<"FEBRUARY";
				break;
				case 3:
					cout<<"MARCH";
					break;
					case 4:
						cout<<"APRIL";
						break;
						case 5:
							cout<<"MAY";
							break;
							case 6:
								cout<<"JUNE";
								break;
								case 7:
									cout<<"JULY";
									break;
									case 8:
										cout<<"AUGUST";
										break;
										case 9:
											cout<<"SEPTEMBER";
											break;
											case 10:
												cout<<"OCTOBER";
												break;
												case 11:
													cout<<"NOVERMBER";
													break;
													case 12:
														cout<<"DECEMBER";
														break;
														default:
															cout<<"wrong entry!\n Please enter between 1 and 12";
				}
	
	
}
void montharr(){
	int number;
	string month[13]={" ","JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
cout<<"enter number\n";
cin>>number;
if(number>=1 && number<=12){
	cout<<month[number];
}
else
{
	cout<<"wrong entry please enter number between 1 and 12";

}
}
void customerInfo(){
	string particulars[4];
string customerId;
string Name;
string City;
string Age;

for(int i=0;i<4;i++){
	if(i==0){
			cout<<"enter your name \n";
			cin>>Name;
			particulars[i]=Name;
	}
else if(i==1){
	cout<<"enter your id \n";
cin>>customerId;
part363
iculars[i]=customerId;
}
else if(i==2){
	cout<<"enter your age \n";
cin>>Age;
particulars[i]=Age;
}
else if (i==3){
	cout<<"enter your city \n";
	
	
cin>>City;
particulars[i]=City;
}

}
cout<<endl;
for(int i=0;i<4;i++){
	cout<<particulars[i]<<endl;
}
}
int main(){
	 

montharr();	
	
	return 0;
}