#include <iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int counter=0;
		for(int i=0;i<10;i++){
		
		bool swaped=false;
		for(int j=i+1;j<10;j++){
			counter++;
			
			if(arr[i]>arr[j]){
				swaped=true;
					
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
				
			}
		}
		if(swaped=false){
			break;
			}    
		}
	cout<<counter<<endl;
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	
	
return 0;	
}