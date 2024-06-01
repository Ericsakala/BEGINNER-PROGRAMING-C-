#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "function.h"
using namespace std;
void example(){
	cout<<"starting functions \n";
}
//function prototype
int add(int,int);//prototype, calling a function after main
int main(){
	example();
cout<<	add(5,6)<<endl;//displaing the return of the function created after main functtion
cout<<sub(8,5);
	return 0;
	
}
int add(int x,int y){
	int sum=0;

	sum=x+y;
	return sum;
}