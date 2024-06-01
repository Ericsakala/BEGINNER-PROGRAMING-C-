#include <iostream>
#include <string>
using namespace std;
int main(){
 int size;
cout<<"enter size"<<endl;
cin>>size;
int *numbers=new int[size];

for(int i=0;i<size;i++){
	cout<<"enter elements at"<<(i)<<endl;
	cin>>*(numbers+i);
}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
		
		if(numbers[i]>numbers[j]){
			int temp=numbers[i];
			numbers[i]=numbers[j];
			numbers[j]=temp;
		}
	}
	}
	for(int i=0;i<size;i++){
		cout<<*(numbers+i)<<", ";
	}
	return 0;
}