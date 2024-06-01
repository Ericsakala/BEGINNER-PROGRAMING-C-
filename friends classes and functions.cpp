#include <iostream>
using namespace std;
class AreaOfRectangle{
	private:
		float width,length,area;
		public:
		
			void setarea(double w, double l){
				width=w;
				length=l;
				area=width*length;	
				
			}
		friend void print(AreaOfRectangle);	
		friend class AreaOfTriangle;	
};
class AreaOfTriangle{
	AreaOfRectangle a;
	a.width;
};

void print(AreaOfRectangle a){
	cout<<"area = "<<a.area;
}

int main(){
	AreaOfRectangle a;
	a.setarea(2.3,3.4);
	 print(a);
	
}