#include <iostream>
using namespace std;
int searchList( int list[], int numElems, int value)
{
	
int index = 0; // Used as a subscript to search array
int position = -1; // To record position of search value
bool found = false; // Flag to indicate if the value was found
while (index < numElems && !found)
{
if (list[index] == value) // If the value is found
{
found = true; // Set the flag
position = index; // Record the value's subscript
}
index++; // Go to the next element
}
cout<<position;
return position; // Return the position, or -1

}
int main(){
	int a[5]={43,6,7,8,4};

 searchList(a, 5,43);
 
 return 0;
}
