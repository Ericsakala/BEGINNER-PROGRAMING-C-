#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
string username="user";
string password="cpp";
int limit=3;
string name;
string pass;
int counter=0;
bool outofattempt=false;	
	
while(username!=name && password!=pass && !outofattempt){
  	if(counter<limit){
			cout<<"please enter your user name \n";
			cin>>name;
			cout<<"please enter your password \n";
			cin>>pass;
				counter++;	

			}
			else{
			outofattempt=true;	
			}
		}

	if(outofattempt){
			cout<<"out of attempt, access denied \n";
			cout<<" \n";
		}	
				
		else{
		
			
		cout<<"access granted \n";	
}


	

return 0;
}