#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	
string input,token;
ifstream read("test.txt");
while(getline(read,input)){
	cout<<input<<endl;

stringstream file(input);
	while(getline(file,token,',')){
		cout<<token<<endl;
	}


}	
	
	return 0;
}
