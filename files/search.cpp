#include <iostream>
using namespace std;
bool search(){
	
	int number[5]={2,3,5,6,7};
	int a;
	cout<<"enter the search number\n";
	cin>>a;
	for(int i=0;i<5;i++){
		if(number[i]==a){
			return 1;
		}
		else{
			return 0;
		}
	}
	
}
void found(){
	int a;
	bool find=search();
	if(find){
		cout<<a<<"found";
	}
	else{
		cout<<"not found";
	}
}
int main(){
int a=1;
a+=1;
cout<<a;
	return 0;
}