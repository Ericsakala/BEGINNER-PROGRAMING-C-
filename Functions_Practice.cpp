#include <iostream>
#include <cstdlib>
using namespace std;

double add();
void print();


double add(double p,double q){
	double answer=0;
	answer=p+q;
	return answer;

}


int main(){
double a,b,sum=0;
cout<<"enter the first value : ";
cin>>a;
cout<<"enter the second value : ";
cin>>b;
sum=add(a,b);

cout<<sum;

}
