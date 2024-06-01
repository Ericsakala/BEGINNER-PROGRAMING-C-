#include <iostream>
#include <cmath>
using namespace std;
class cylinder{
	public:
	const float pi=3.142;
	double radius;
	double height,answer;
  cylinder();
};



	 cylinder::cylinder(){
		cout<<"enter the radius of the cylinder\n";
		cin>>radius;
		cout<<"enter the height of the cylinder\n";
		cin>>height;
		answer=pi*(pow(radius,2))*height;
		cout<<"the volune is : "<<answer;
	}
int main(){
	cylinder volume1;
	cylinder();
 int x=65500;
x+200;
x++;
cout<<x;
	return 0;
}