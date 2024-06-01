#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <unordered_map>
using namespace std;
class add{
	public:
		int x;
		int y;
		friend void mathe(add c);
		friend class sub;
};

void errorcatch();
//{
//try{
//	int x;
//	cout<<"enter the numbers from 1 to 100 \n";
//	cin>>x;
//	if(x){
//		cout<<"you have successfuly chose the right option \n";
//		
//	}
//	else{
//	throw 555;
//	}
//}
//
//catch(int i)
//{
//	
//	
//		cout<<"you pressed the wrong key";
//	
//}
//}

int bina(int arr1[], int searched){
	int n = sizeof(arr1)/sizeof(arr1[0]);
int i=0,j=n-1,mid;
while(i!=j){
	mid=(j+i)/2;
	if(arr1[mid]<searched ||arr1[mid]>searched){
		j--;i++;
	}else{
		return arr1[mid];
	}
	
	
}
}


int main (){
	
//const int NUM_FISH = 20;
//int fish[NUM_FISH];
//// You must finish this program. It should ask how
//// many fish were caught by fishermen 1-20, and
//// store this data in the array fish.
//for(int i=0;i<20;i++){
//	
//	cout<<"how many fish did you catch "<<(i+1)<<endl;
//	cin>>fish[i];
//}
//for(int i=0;i<20;i++)
//cout<<(i+1)<<".\t"<<fish[i]<<endl;
//

//const int NUM_LETTERS = 10;
// char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
// 'F', 'G', 'H', 'I', 'J'};
//
// cout << "Character" << "\t" << "ASCII Code\n";
// cout << "---------" << "\t" << "----------\n";
// for (int count = 0; count < NUM_LETTERS; count++)
// {
// cout << letters[count] << "\t\t";
// cout << static_cast<int>(letters[count]) << endl;
//
//}
//char letter[4]={'E','R','I','C'};
//for(int i=0;i<4;i++)
//cout<<static_cast<double>(letter[i])<<"\t";
//int num[5]={2,1,3,6,4};
//int min;
//int p;
//cout<<"unsorted array : ";
//	for(int i=0;i<5;i++ )
//	{
//		cout<<num[i]<<"\t";
//	}
//for(int i=0;i<5;i++)
//{
//	min=num[i];
//	p=i;
//	for(int j=i+1;j<5;j++)
//	{
//		
//		if(num[j]<min)
//		{
//			min=num[j];
//			p=j;	
//		}
//		
//	}
//	int temp=num[i];
//	num[i]=num[p];
//	num[p]=temp;
//}
//cout<<endl;
//cout<<endl;
//cout<<"sorted array : ";
//cout<<endl;	
//int answer;
//answer=bina(num,6);
//cout<<"answer = "<<answer<<endl;
//
for(int i =10; i>0;i-=2){
	for(int j=0;j<i;j++){
		cout<<"*";
	}
	cout<<endl;
}

int i=10;
do{
	int j=0;
	do{
	cout<<"*";
	j++;	
	}while(j<i);
	i-=2;
	cout<<endl;
}while(i>0);

return 0;
	
}
