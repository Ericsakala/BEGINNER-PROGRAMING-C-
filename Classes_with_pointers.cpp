#include<iostream>
using namespace std;
class Area{
public:
    double length;
    double bridth;
    };
int main(){
system("color c");

//dynamically allocating
Area* rectangle1;
rectangle1= new (Area);
rectangle1->bridth=6;
cout<<rectangle1->bridth<<endl;

int* num= new (int);
*num=78;
cout<<&num<<endl<<endl<<endl;

string* name=new (string);
*name="Noreen";
cout<<"string* name=new (string);\n\n*name=\"Noreen\"\n";

cout<<"cout<<&name = "<<&name<<endl;
cout<<"cout<<*name = "<<*name<<endl;
cout<<"cout<<name = "<<name<<endl;





return 0;
}
