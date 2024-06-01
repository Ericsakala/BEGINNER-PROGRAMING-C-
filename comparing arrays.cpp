#include <iostream>
using namespace std;
bool checkingArrayIfEqual(int arr1[],int arr2[],int size1,int size2){
	int x,y;
int n=size1;
int m=size2;
int counter=0;
if(n!=m){
	return false;
}else{
	for(int i=0;i<n;i++){
		if(arr1[i]==arr2[i]){
			counter+=1;
		}
	}
	if(counter==n){
		return true;
	}else{
	return false;
	}
	
}
	
return 1;	
}



void removeDuplicates(int arr[],int size){
	int n=size;
	int temp[n];
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[i]==arr[j]){
	
			arr[i]--;
	}
}

}	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}


int main(){
	bool same=false;
	int a[3]={1,2,3};
	int b[3]={1,2,3};
	same=checkingArrayIfEqual(a,b,3,3);
//
//if(same==true){
//	cout<<"the arrays are equal\n";
//}
//else{
//	cout<<"the arrays are not equal\n";
//}
int n[5];
int arr[5]={2,1,3,2,1};

removeDuplicates(arr,5);

	return 0;
}