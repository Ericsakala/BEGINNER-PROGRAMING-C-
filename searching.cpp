#include<iostream>
using namespace std;
int sorting(int array[],int s,int value);
int searching(int arr[],int value,int low,int high);
int main()
{
	int searchNum,answer;
  int number[7]={6,3,7,1,9,40,5};
cout<<"enter the number you want to search in an array\n";
cin>>searchNum;
answer=sorting(number,7,searchNum);
if (answer==-1){
	cout<<"the value was not found in the array\n";
	
}else{
	cout<<"the value was found at position "<<answer<<endl;
}

    
    return 0;
}


int sorting(int array[],int s,int value)
{
	array[s];

    
    for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
          if(array[i]>array[j])
          {
              int temp=array[i];
              array[i]=array[j];
              array[j]=temp;
             

          }
          
        }
    }
for(int i=0;i<s;i++){
	cout<<array[i]<<" ";
}
cout<<endl;
    
      //int low=0,high=array[s];
    
     int position = searching( array, value, 0, s-1);
     

    if(position<0){
	
        return 0;
    }
    else{
    	
   return position;
}
}


 int searching(int arr[],int value,int low,int high)
 {
    

     while(low<=high)
     {
         int mid=(high+low)/2;
         if(arr[mid]==value)
         {
             return mid;
         }
         if(arr[mid]>value)
         {
             high=mid-1;  
         }
         if(arr[mid]<value)
         {
             low=mid+1;
          
         }

     }
     
     return -1;
 }

