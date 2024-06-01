#include <iostream>
#include <vector>
#include <string>
using namespace std;
int sorting(int arr[],int value){
int n=sizeof(arr)/sizeof(arr[0]);
 int low=0;
 int high=n-1;
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==mid){
            return mid;
    }
    if(arr[mid]>mid){
        low=mid+1;
    }
    if(arr[mid]<mid){
        high=mid-1;
    }
}

return -1;
}
int searching(int array[],int value){
int n=sizeof(array)/sizeof(array[0]);
for(int i=0;i<n;i++){
   if(array[i]=value){
    return i;
   }
}
return -1;
}
int main(){
	string word;
int numbers[100000000];
int i=0;
while(i<100000000){
    numbers[i]=i;
    i++;
}
//for(int i=0;i<10000;i++){
//    cout<<numbers[i]<< " ";
//}
cout<<endl;
//int answer=sorting(numbers,1000000);
int answer=searching(numbers,1);
if(answer<0){
    cout<< "value not found \n";
}else{
cout<< "value found at position "<<answer<<endl;
}

//  binary search run time 4.286 s,  4.188 s,  0.088 s,   0.945 s,1.175 s,0.996 s
//  sequential search      4.320 s,  4.227 s,  0.098 s,   1.852 s,0.936 s,1.090 s
	return 0;

}

