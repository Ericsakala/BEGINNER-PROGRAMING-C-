#include <iostream>
#include <utility>
#include <cstdlib>
using namespace std;
void Selection_sort(int [], int);
void insertion_sort(int [],int );
void Selection_sort(int arr[],int size){
	int k,min;
	
int sorted [size];
	for( int i=0;i<size;i++){
		min=arr[i] ;
		k=i;
		for( int j=i+1;j<size;j++){
			if(arr[j]<min){
				min=arr[j];
				k=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
	}
	cout<<"\n Here is the sorted array\n";
	for(int i=0;i<size;i++){
		
		cout<<arr[i]<<" ";
	}
}
void insertion_sort(int array[],int size){
	int temp;
	
	for(int i=1;i<size;i++){
		temp=array[i];//inseting the element at position 1 into a temp variable
		int j=i-1;   //and initialize j at the begining of an array
			
		while(j>=0 && array[j]>temp){//checking if elemt at the point is less that 
		//previous elements and swap
		
			array[j+1]=array[j];
			j--;
		}
	array[j+1]=temp;
	}

	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}

//quick sort.
//prototypes
void sorts(int arr[],int size); 
int pivoting(int arr[],int start,int end);
void quicksort(int arr[],int start,int end);

//the function that partition and found the pivot
int pivoting(int arr[],int start,int end){
	
	int pivot=arr[end];
	int j=start;
	int temp;
	
	for(int i=start;i<end;i++){
		
			if(arr[i]<=pivot){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			//swap(arr[j],arr[i]);  //swapping using function in library					
			j++;
		
		}
	}
	//	swap(arr[j],arr[end]);	//swapping using function in library
	temp=arr[end];
	arr[end]=arr[j];
	arr[j]=temp;
		return j;

				
	
}
//a recution function that sort the element from start up to pivot and from pivot upto end
void quicksort(int arr[],int start,int end){
	
	
	if(start<end){
	int pivot=pivoting(arr,start,end);
	quicksort(arr,start,pivot-1);
	quicksort(arr,pivot+1,end);
}

}
// the function that call the sorting array and give it the starting point and the end;
void sorts(int arr[],int size){
	quicksort(arr,0,size-1);
}


int main(){
	
	int numbers[7]={87,4,6,2,1,9,43};
	//Selection_sort(numbers,7);    //testing
	//insertion_sort(numbers,7);    //testing
	//pivoting(numbers,0,7,7);      //testing
	sorts(numbers,7);
	for(int i=0;i<7;i++){
	cout<<numbers[i]<<" ";
}
	return 0;
}