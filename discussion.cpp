#include <iostream>
#include <string>
using namespace std;
int addition(){
	int a;
	int b;
	cout<<"enter number\n";
	cin>>a;
	cout<<"enter second number\n";
	cin>>b;
	int results;
results=a+b;
cout<<results;
return results;
}
int main(){
addition();

	return 0;
}