#include <iostream>
using namespace std;
float sum_of_elements(int arr1[],int arr2[],int n,int m){
	
	arr1[n];
	arr2[m];
	float sum=0;
	if(n==m){
	for(int i=0;i<n;i++){
		sum+=(arr1[i]+arr2[i]);
	}
	}else{
	for(int i=0;i<n;i++){
		sum+=arr1[i];
	}
	for(int j=0;j<m;j++){
		sum+=arr2[j];
	}
	}	
	return sum;	
	
	
}
	

int main(){
for(int i=1;i<=5;i++){
	if(i%2==0){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
	}else{
		for(int j=i;j>0;j--){
			cout<<j<<" ";
		}
	}
	cout<<endl;
}


	return 0;
}