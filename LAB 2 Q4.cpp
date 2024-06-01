// writting the programme to produce the partern//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
cout<<"ente the number\n";
int num;
cin>>num;
for(int i=2;i<num/2;i++){
	if(num%i==0){
	cout<<num<<" is not a prime number";	
	}
else{
	cout<<num<<" is a prime number";
}
}
	
  return 0;
}