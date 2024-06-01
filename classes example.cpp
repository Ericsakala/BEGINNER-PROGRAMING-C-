#include <iostream>
using namespace std;
class Area{
	private:
		double length,width,area;
		public:
			void answer(double ,double){
				cout<<"enter the length of your object\n";
			cin>>length;
			cout<<"enter the width of an object\n";
			cin>>width;
			area=width*length;
			cout<<"the Area is : "<<area;
			}
};
int min(){
	double width,length;
	Area work;
	work.answer(5,5);
	
	
	return 0;
}