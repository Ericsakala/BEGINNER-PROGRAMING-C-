#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	double radius;
	double circumference;
	const float pi = 2.142;
	const int a =2;
	cout <<"THIS PROGRAMME CALCULATES THE CIRCUMFERENCE OF THE CIRCLE OF THE GIVEN RADIUD\n\n\n";
	cout<<"enter the radius\n";
	cin>>radius;
	circumference =a*pi*radius;
	cout<< "the circumference of the circle of radius "<<radius<<" is : "<<circumference<<endl;
	
	
	
	
	return 0;
}