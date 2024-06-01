#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	vector<int>number;
	
	 number.push_back(0);
	for(int i=0;i<5;i++){
		cout<<"enter the numbers\n";
	cin>>number[i];
	
	}
	for(int i=0;i<5;i++){
		cout<<number[i]<<" ";
	}
	
	
	return 0;
}
