#include <iostream>
using namespace std;
int main(){
	
	double distance=0;
	double time=0;
	double speed=0;
	cout<<"enter the distance travelled \n";
	cin>>distance;
	cout<<"enter the time taken to cover the distance travelled \n";
	cin>>time;"\n";
	speed=distance/time;
	for(int i=0;i<=time;i++){
		
			
		cout<<speed*i<<endl;
		}
	
	
	
	
	return 0;
}