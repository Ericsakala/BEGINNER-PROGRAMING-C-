#include <iostream>
#include <string>
using namespace std;
int main(){
	int num[10];
	for(int i=0; i<10;i++){
		cout<<"enter the number of your choice\n";
		cin>>num[i];
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(num[i]>num[j] && num[i]!=0){
				int temp = num[i];
				num[i]=num[j];
				num[j]=temp;
				
			}
		}
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(num[i]==0 && num[j]!=0){
				int temp = num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}