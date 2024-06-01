#include <iostream>
#include <string>
using namespace std;
using std::string;
class Car{
	int year;
	string make;
	int speed;
	public:
		Car(int a,string m){
			year = a;
			make=m;
			speed=0;
		}
	int getyeer(){return year;}
	string getmake(){return make;}
	int getspeed(){return speed;}
	
	void accelerate(){speed+=5;}
	void brake(){speed-=5;}

	
};
int main(){
	
Car car(2023,"TOYOTA");
/*for(int i=0; i<5; i++)
{
car.brake();
cout<<"the current speed of the car is = "<<car.getspeed()<<endl;
}*/
for(int i=0; i<5; i++){car.accelerate();
cout<<"the current speed of the car is = "<<car.getspeed()<<endl;
}	
	return 0;
}