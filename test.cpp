#include <iostream>
#include <cstdlib>
using namespace std;

double add();
int print(int a){
	if(a){
		return a;
	}else{
		return 1;
	}
return 0;	
}


double add(){
//	double p,double q
//	double answer=0;
//	answer=;
//	return p+q;
double a,b,sum=0;
	cout<<"enter the first value : ";
cin>>a;

cout<<"enter the second value : ";
cin>>b;

sum=a+b;
cout<<"sum :"<<sum<<endl;;

return 0.0;
}


int main(){
	int choice;
cout<<"1.add\n";
cout<<"2.exit\n";

do{
cout<<"enter your choice\n";
cin>>choice;
switch(choice){
case 1:
add();
break;
case 2:
exit(0)	;
break;
}
}while(choice!=2);



	
}


