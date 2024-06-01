#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
using namespace std;
union ws{
	int num;
	int age;
};
struct computation{
	
		double *r;
		double h;
		double m;
		const double pi=3.142;
	
			double velocity;
			int time;
			double accel_due_grvaity;
			const double G=6.67*pow(10,-11);
			void gravitationalAcceleration(){
				cout<<"enter the mass\n";
				cin>>m;
				cout<<"nter the radius h\n";
				cin>>h;
				cout<<"enter the radius\n";
				cin>>*r;
				accel_due_grvaity=G*m/pow((*r+h),2);
				cout<< "accelaration due to gravity = "<<accel_due_grvaity<<"m/s^2"<<endl;
			}
	
};
int main(){
	enum class Presidents { MCKINLEY=4, ROOSEVELT, TAFT };
enum class VicePresidents { ROOSEVELT, FAIRBANKS, SHERMAN };
cout<<Presidents=TAFT;
//	
//	
//object1.gravitationalAcceleration();
//object2.gravitationalAcceleration();
//if(object1.accel_due_grvaity==object2.accel_due_grvaity){
//	cout<<"this object are are equal and they are at equivalent distance above sea level\n";
//}
//else if(object1.accel_due_grvaity>object2.accel_due_grvaity){
//	cout<<"object 1 is at higher distance above sea level\n";
//	
//}
//else{
//	cout<<"object 2  is at higher distance above sea level\n";
//}
return 0;
}