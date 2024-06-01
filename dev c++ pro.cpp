// classes
#include <iostream>
using namespace std;
using std::string;
class Student{
	public:
	string name;
	int age;
	int id;
	string group;
};

int main(){
//	Student *user1;
//	 user1->name= "eric";
//	 user1->age= 23;
//	 user1->id= 22105408;
//	 user1->group= "SICT";
//	 cout<<"name: " << user1->name<<endl;
//	 cout<<"AGE: " << user1->age<<endl;
//	 cout<<"ID NUMBER: " << user1->id<<endl;
//	 cout<<"GROUP: " << user1->group<<endl;
	 
	 int num[5]={6,2,9,7,3};
//	 for(int i=1;i<=4;i++)
//	 {
//	 	int temp =num[i];
//	 	int j=i-1;
//	 	while((temp<num[j]) )
//	 		{
//	 		num[j+1]=num[j];
//			 j=j-1;	
//			  
//			 }
//			num[j+1]=temp;
//	 }
	 for(int i=0;i<5;i++){
	
	 	int temp =num[i];
	 	for(int j=i-1;temp<num[j];j++){
	 		num[j+1]=num[j];
			 num[j+1]=temp;
		 }
		 	
		 
	 }
	 
	 
	 for(int i=0; i<5;i++)
	 {
	 	cout<<num[i]<<" ";
	 }
	return 0;
}