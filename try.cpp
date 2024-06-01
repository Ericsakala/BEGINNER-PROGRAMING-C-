#include <iostream>
using namespace std;
int search(int arg[],int low,int high,int value){

	while(low<=high){
		int mid=(low+high)/2;
		if(arg[mid]==value){
			return mid;
		}
		if(arg[mid]>value){
			high=mid-1;
		}
		if(arg[mid]<value){
		low=mid+1;	
		}
		
	}
	return arg;
//	return -1;
}

int main(){
// string username,userpassword;
// string user="user",pass="cpp";
// int max=3;
// int attempt=0;
//
// do{
// 	cout<<"enter the name : ";cin>>username;
// 	cout<<"enter the password : ";cin>>userpassword;
// 	if(userpassword==pass && username==user){
// 		cout<<"you are accepted \n";
// 		break;
//	 }else{
//	 	cout<<"\nwrong password or user name\n";
//	 	attempt++;
//	 }
//	 if(attempt==max){
//	 	cout<<"\n the account is locked\n";
//	 }
// 	
// }while(attempt<3);  
// 
 int arr[10]={2,6,8,9,10,11,13,31,36,90};
 int searchnum;
 cout<<"enter the number you want to search\n";
 cin>>searchnum;
 int flag=search(arr,0,9,searchnum);
if(flag==-1){
	cout<<"item not foud\n";
	
}else{
	cout<<"item foud at "<<flag;
}
 
// for(int i=0;i<10;i++){
// 	if(arr[i]==searchnum){
// 		flag=i;
//	 }
// }
// if(flag<0){
// 	cout<<"the number you are searching is not found\n";
// 	
// }else{
// 	cout<<"the number you are searching is found at position "<<flag;
// }
 
 
 
}
