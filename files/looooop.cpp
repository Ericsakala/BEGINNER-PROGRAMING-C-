#include <iostream>
#include <string>
using namespace std;
int main(){
	
	int mark[100],num,counter=0;
	cout<<"enter the number of students you want to record marks \n";
	cin>>num;
	for(int i=0;i<num;i++){
		
		cout<<"enter the mark of student "<<(i+1)<<endl;
		cin>>mark[i];
	
	}
	for(int i=0;i<num;i++){
		for(int j=i+1;j<num;j++){
				
		if(mark[i]<mark[j]){
			counter=mark[j];
		}
		else
		{
			counter=mark[i];
		}
		cout<<counter;	
		}
	}
	
}