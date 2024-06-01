//cs130 tollgate system record
#include <iostream>
#include <string>
#include "CS 130 FUNCTIONS.h"
using namespace std;

int main (){
int option;

cout <<" welcome to E M S E C TOLLGATE SYSTEM! \n\n";
cout <<" 1. Add Record \n";
cout <<" 2. Display records \n";
cout <<" 3. Exit \n";
cout<<"enter your choice \n";
cin>>option;
cin.ignore();
 switch (option){
 
 case 1: 
 AddRecord();
 break;
 case 2: 
 //Display();
 
 case 3:
  cout <<"thanks for interacting with the sysytem"<<endl;
  break;
  
 default:
  cout<<"cout incorrect input! ";
  break;
 }
 return 0;
}