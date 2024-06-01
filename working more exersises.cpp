#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	
	string bin[10]={"valve","bearings","bushing","coupling","flange","gear","gear housing","vacuumclipper","cable","rod"};
	int parts[10]={10,5,15,21,7,5,5,25,18,12};
	for(int i=10;i>=0;i--){
		cout<<bin[i];
	}
//		for(int i=0;i<10;i++){
//			
//		}
//		
//	for(int i=10;i<=0;i--)
//	{
//		cout<<bin[i];cout<<"\t\t\t"<<parts[i]<<endl;
//	}	
	
	
	return 0;
}