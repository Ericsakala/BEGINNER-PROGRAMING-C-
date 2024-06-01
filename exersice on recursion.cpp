#include <iostream>
using namespace std;
float power_0f_num(float base, float power){
	if(power==0){
		return 1.0;
	}else{
		return base*power_0f_num(base,power-1);
	}
	
}
int fib(int n){
	if(n<2)
{
	return n;
}else{
	return fib(n-1)+fib(n-2);
}
}
int powerUsingIteration(int base, int power){
	int n=power;
	int results=1;
	//iterate up to the nth power because powering a number a is 
	//multiplying by itself n times
	for(int i=0; i<n;i++){
		results= results*=base;
	}
	return results;
}
int main(){
//	int n,first=0,second=1,answer;
//	cout<<"which fib do you want to calculate\n ";
//	cin>>n;
//	for(int i=1;i<n;i++){
//		 
//		answer=first+second;
//	//	cout<<answer;
//		
//		first=second;
//		second=answer;
//		
//	}
//	cout<<" fib of "<<n<<" is : "<<answer;

	

   string *Name = new (string);
   *Name="Amos";
   cout<<*Name;

	
	return 0;
}