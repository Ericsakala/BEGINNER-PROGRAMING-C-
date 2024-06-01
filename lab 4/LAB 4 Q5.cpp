#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	double radius;
	double v;
	const double pi =3.142;
	double height;
	cout<<"THIS PROGRAMME CALCULATES THE VOLUME OF THE CYLINDER\n\n\n";
	cout<<"enter the radius\n";
	cin>>radius;
	cout<<"enter the height\n";
	cin>>height;
	v=pi*pow(radius, 2)*height;
	cout<<"the volume of the cylinder of radius "<<radius<< " and height "<<height<<" is "<<v<<""<<endl;
	
	
	
	return 0;
}