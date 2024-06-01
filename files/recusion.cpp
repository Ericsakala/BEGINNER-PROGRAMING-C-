#include<iostream>
#include<fstream>
using namespace std;
int main()

{/*
	ofstream sendf;
	sendf.open("ranking.txt",ios::app);
string programming_language2018[10];
string programming_language2021[10];
	for(int count=0;count<10;count++ )
	{
	
  cout<<"ENTER PROGRAMMING LANGUAGES 2018 :"<<(count+1)<<endl;
getline(cin,programming_language2018[count]);
}
for(int count=0;count<10;count++){

cout<<"ENTER PROGRAMMING LANGUAGES 2021 :"<<(count+1)<<endl;
getline(cin,programming_language2021[count]);

	
}
   sendf<<"NO\t\2018\t\2021"<<endl;
   for(int count=0;count<10;count++){
   	sendf<<(count+1)<<"\t"<<programming_language2018[count]<<"\t"<<programming_language2021[count]<<endl;
   	
   	
   }
   sendf.close();*/
   int search;
   int number[10]={3,9,5,2,12,7,6,4,19,71};
   int result;
   cout<<"enter the number"<<endl;
   cin>>search;
   for(int count=0;count<10;count++) {
   	search=number[count];
   	 if(number[count]==search){
   	 	cout<<"result found";
   	 	
		}
	
		else
		{
			cout<<"no result found";
		
		}
   }
}
