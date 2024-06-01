#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){

	string username ="user";
	string password ="cpp";
	string name;
	string pass;
	int counter=0;
	int limit =3;
	bool check = false;

	while(name!=username && pass!=password && !check)
	{
	if(counter<limit)
	{
	cout<<"enter the username\n";
	getline(cin,name);
	cout<<"enter the password\n";
	getline(cin,pass);	

		}
		else
		{
			check=true;
		}
	
		counter ++;	
	}


if(check==true){
	cout<<"system locked\n";
}
else
{
	cout<<"access granted \n";
}

	

return 0;
}