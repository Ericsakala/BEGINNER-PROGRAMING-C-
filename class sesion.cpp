// to get the value from the usr we use cin and followed by opperators <<*\
#include <iostream>
#include <string>
using namespace std;
int main ()
{
int arr1[3]={5,3,2};
int arr2[3]={1,8,2};
for(int i=0;i<3;i++){
	for(int j=i+1;j<3;j++){
		if(arr2[i]<		arr2[j]){
			int temp =arr2[i];
			arr2[i]=arr2[j];
			arr2[j]=temp;
		}
	}
}


return 0;
}