//pointers
#include <iostream>
using namespace std;
int main(){
	
	int *age=NULL;
	int temp=65;
	age=&temp;
	cout<<"output : "<<temp<<endl;
	cout<<"output : "<<*age<<endl;
	
	int *a=new int;
	cout<<"enter :";
	cin>>*a;
	cout<<*(a)<<endl;;
	delete a;
	a=NULL;
	cout<<*a;
	
 
	
	cout<<"output : "<<age<<endl;
	cout<<"output : "<<&temp<<endl;

	//& address of the particular memory
	//* the value stored at that particular memory
	*age=78;
	cout<<endl;
	cout<<"the value stored in temp is : "<<temp<<endl;

	return 0;
}