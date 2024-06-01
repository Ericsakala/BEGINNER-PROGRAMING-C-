#include <iostream>
#include <string>
using namespace std;
union person
{
string name;
string colour;	
	
};
int main (){
	
person a;
a.colour="green";

return 0;
}
