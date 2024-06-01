#include <iostream>
#include <string>
#include "functionsLab7.h"
using namespace std;
void Factorial(){
	int number,factorial=1;
	cout<<"enter number"<<endl;
	cin>>number;
for(int i=1;i<=number;i++){
factorial=factorial*i;

}
cout<<number<<"! = "<<factorial;
}
int sumOfnumbers(){
int num,sum=0;
cout<<"THIS PROGRAMME ADD PRECEEDING NUMBERS OF THE NUMBER YOU ENTER \nenter the number"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
	sum=sum+i;
	
}
cout<<sum;	
return sum;	
}

int main(){

//int choice;
//
//cout<<"1. Average \n";
//cout<<"2. Gross pay \n";
//cout<<"3. Exit"<<endl;
//cout<<"enter your choice"<<endl;	
//cin>>choice;
//
//switch(choice){
//	case 1:
//	average();
//	
//	cout<<endl;
//	main();
//	break;
//	case 2:
//	Grosspay();
//		cout<<endl;	
//	main();
//	break;
//	case 3:
//	exit();	
//break;
//default:
//	cout<<"wrong entry! pleae choose from the option above\n";
//		cout<<endl;	
//	main();
//	break;
//	
//}



return 0;

}