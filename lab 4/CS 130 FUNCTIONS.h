#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void AddRecord(){
int Total=0, small=0,mid=0,large=0,counter;
string month;
cout <<" Enter month: ";
  cin >>month;
  cin.ignore();
  cout <<" Enter the number of small vehicles recorded"<<endl;;
 cin >>small;
 cout<<"Enter the number of medium vehicles recorded"<<endl;
 cin >>mid;
 cin.ignore();
 cout <<" Enter the number of abnormal vehicles recorded"<<endl;
 cin >>large;

 Total= ((small*30)+(mid*50)+(large*1700));
 cout <<"Total amount: "<<Total<<endl;
 counter++;
ofstream record;

 record.open("record.txt", ios::app);
 record<<"Month             : "<<month<<endl;
 record<<"Small vehicles     : "<<small<<endl;
 record<<"Medium vehicles   : "<<mid<<endl;
 record<<"Abnormal vehicles  : "<<large<<endl;
 record<<"Total Amount collected in (ZMW) : "<<Total<<endl;
  
  record.close();
  cout <<"Record Updated! ";
} 






