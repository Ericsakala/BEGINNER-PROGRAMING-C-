#include <iostream>
using namespace std;

void max(int arr[],int size)

int main(){
	int accounts[2][3]={
	{1,3,2},
	{ 3,4,5}
	};
	int sum1[2];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
		sum1[i]+=accounts[i][j];	
		}
		if(sum1[i]>sum1[i+1]){
			cout<<sum1[i];
			break;
		}else{
			cout<<sum1[i+1];
			break;
		}
	}

}