#include <iostream>
using namespace std;
int Power(int x,int y){
	if(y<=1){
		return y;
	}
	else{
		return y*Power(x,(y-1));
	}
	
}

int main(){
	int a,b,c;
	cout<<"enter the base and the base\n";
	cin>>a;
	cout<<"enter the power\n";
	cin>>b;
	c=Power(b,a);
	cout<<c;
	
}