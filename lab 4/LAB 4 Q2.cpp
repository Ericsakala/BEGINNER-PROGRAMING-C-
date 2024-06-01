#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	double width;
	double length;
	double perimeter;
	double area;
	const int a =2;
	cout<<" "<<endl;
	cout<<"THIS PROGRAMME CALCULATES THE PERIMETER AND THE AREA OF THE GIVEN LENGTH AND WIDTH OF A LECTANGLE\n\n\n";
	cout<<"enter the length\n";
	cin>>length;
	cout<<"enter the width\n";
	cin>>width;
	perimeter =a*(width + length);
	area = width * length;
	cout<< "the perimeter is : "<<perimeter<<endl;
	cout<<"the area is : "<<area<<endl;
	
	
	
}