#include<iostream>
using namespace std;
double power(double base,double power1){
	double answer;
	if(power>0){
	return answer*= base*power(base,power1-1);
	}
	return answer;
}
int main(){
double b,a,c;
cout<<"enter the base : ";cin>>b;
cout<<"enter the power : ";cin>>a;
c=power(b,a);
cout<<c;



}