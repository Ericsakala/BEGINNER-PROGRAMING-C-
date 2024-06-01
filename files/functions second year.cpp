//functions
#include<iostream>
using namespace std;

double Acceleration (double initial_v,double final_v,double time){//recieving aguments
	double Acceleration;
	
	Acceleration=(final_v - initial_v)/time;
	return Acceleration;
}
int main(){ 
	double initial_v, final_v, time,acceleration;
	cout<<"enter the final velocity\n ";
	cin>>final_v;
	cout<<"enter the initial velocity\n ";
	cin>>initial_v;
	cout<<"enter the time\n ";
	cin>>time;
 	acceleration=Acceleration( initial_v,final_v, time);
 	cout<<"Acceleration = "<<acceleration;
 	
 	
 	
	
	
	
	return 0;
}*/
