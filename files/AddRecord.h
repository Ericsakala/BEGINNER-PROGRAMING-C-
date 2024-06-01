//cs130 project
#include <iostream>
#include <fstream>
using namespace std;
int counter;
 struct tollGate{
 	string month,date;
 long int Total, small, medium, large;	
 	
 };

void record(){
		tollGate tollvalue;


cin.ignore();
				cout <<" Enter month \n";
				getline(cin,tollvalue.month);
				cout<<"enter the date of aploading record\n";
				getline(cin,tollvalue.date);
				cout <<" Enter number Of small Vehicles recorded in this month: "<<endl;
				cin >> tollvalue.small;
			    cout <<" Enter number Of Medium  Vehicles recorded in this month: "<<endl;
				cin >> tollvalue.medium;
			    cout <<" Enter number Of Abnormal Vehicles: "<<endl;
				cin >> tollvalue.large;
				tollvalue.Total = ((tollvalue.small*50)+(tollvalue.medium *100)+(tollvalue.large*1800));
				counter++;
			
	ofstream record;
	             
				record.open("records.txt",ios::app);
				record<<counter<<endl;
				record<<tollvalue.month<<endl;
				record<<tollvalue.date<<endl;
				record<<tollvalue.small<<endl;
			    record<<tollvalue.medium<<endl;
			    record<<tollvalue.large<<endl;
				record<<tollvalue.Total<<endl;
			     record.close();
				ofstream file;
				file.open("tracker.txt");
				file<<counter;
				file.close();
		
				cout <<" Record added successfully!";
		
			

}

void print(tollGate a){
				cout<<"\t----------------------------------------------------\n";
            	cout<<"\tRecord no                      : "<<counter<<endl;
				cout<<"\tMonth                          : "<<a.month<<endl;
				cout<<"\tDate recorded                  : "<<a.date<<endl;
				cout<<"\tNo of Small Vehicles           : "<<a.small<<endl;
			    cout<<"\tNo of Medium  Vehicles         : "<<a.medium<<endl;
			    cout<<"\tNo of Abnormal Vehicles        : "<<a.large<<endl;
				cout<<"\tTotal revenue in (ZMW)         : K"<<a.Total<<endl;
				cout<<"\t-----------------------------------------------------\n";	
	
	
}
bool search(){
	tollGate tollvalue;
	string monthsearch;
			cin.ignore();
	cout<<"enter the mounth you want to search \n";
    getline(cin,monthsearch);
		
	ifstream read;
		read.open("records.txt");
		while(!read.eof()){
			
			read>>counter;
			read.ignore();
			getline(read,tollvalue.month);
		     read>>tollvalue.date;
		   //  read.ignore();
				read>>tollvalue.small;
				read>>tollvalue.medium;
				read>>tollvalue.large;
				read>>tollvalue.Total;
				//read>>counter;
		    	read.ignore();
		           
		       }
		           
				   if(monthsearch==tollvalue.month){
				  
				   	print(tollvalue);
				   	return 1;
				   } 
				   else{
				   	
				   	
				   	cout<<"no record found for the searched month \n";
				   	return 0;
				   	//break;
				   }     
			
             read.close();	
             
             return 1;
}

void display(){
tollGate tollvalue;
				ifstream read;
		read.open("records.txt");
			while(!read.eof()){
			read>>counter;
			read.ignore();
			getline(read,tollvalue.date);
			read>>tollvalue.month;
			
				read>>tollvalue.small;
				read>>tollvalue.medium;
				read>>tollvalue.large;
				read>>tollvalue.Total;
		           read.ignore();              
             	print(tollvalue);
             	if(counter==0){
             		cout<<"no record found\n";
             		break;
				 }
		
			
				
}
read.close();
		
}