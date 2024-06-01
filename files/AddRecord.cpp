//cs130 project
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string month;
 int Total, small, medium, large;
				cout <<" Enter month \n";
				cin >>month;
				cout <<" Enter number Of small Vehicles recorded in this month: "<<endl;
				cin >> small;
			    cout <<" Enter number Of Medium  Vehicles recorded in this month: "<<endl;
				cin >> medium;
			    cout <<" Enter number Of small Vehicles: "<<endl;
				cin >> large;
				Total = ((small*50)+(medium *100)+(large*1800));
				cout <<" Record added successfully!";
			
	ofstream record;
				record.open("records.txt");
				record<<" Month: "<<month;
				record<<" No. Of Small Vehicles: "<<small<<endl;
			    record<<" No. Of Medium  Vehicles: "<<medium<<endl;
			    record<<" No. Of Abnormal Vehicles: "<<large<<endl;
				record<< " Total Amount in (ZMW): "<<Total<<endl;
				record.close();
			
return 0;
}