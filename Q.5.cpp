#include <iostream>
using namespace std;
int main() {
const int Add_Choice=1,
Sub_Choice=2,
Product_Choice=3,
Exit_Choice=4;
int choice, num1, num2,difference,product;
double sum;
do
{
cout<<"\t Welcome! Please select your choice\n";
cout<<"1. Addition\n";
cout<<"2. Subtraction\n";
cout<<"3. Product \n";
cout<<"4. Exit \n";
cin>>choice;
while (choice<Add_Choice || choice>Exit_Choice) {
cout<<"Please enter a valid choice\n";
cin>>choice;
}
if (choice !=Exit_Choice) {
cout<<"Enter first numbers\n";
cin>>num1;
cout<<"Enter second numbers\n";
cin>>num1;
switch (choice)
{
case Add_Choice:
sum = num1+num2;
cout<<"The Sum is: \n"<<sum<<endl;
break;
case Sub_Choice:
difference = num1-num2;
cout<<"The difference is: \n"<<difference<<endl;
break;
case Product_Choice:
product= num1 * num2;
cout<<"The Product is: \n"<<product<<endl;
}
}}
while (choice !=Exit_Choice);
return 0; }
