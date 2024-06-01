#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main(){
//(cctype libraly) character testint function : isalpha,isupper,islower,isalnum,isdigit,isspace,isprint,ispuct,toupper,tolower
//if(isalpha(r)){
//	
//cout<<"yes"<<endl;
//cout<<toupper('g');	
//}
//else{
//	cout<<"no";
//}
//const int size=12;
//char r[size];
//cin.getline(r,size);


		
			  // (cstring libraly) : strcat,srtlen,strcpy,strncpy,strncat,
					//Here is a program segment that uses the sizeof operator to test an array’s size before
				//strcat is called:
				//if (sizeof(string1) >= (strlen(string1) + strlen(string2) + 1))
				//strcat(string1, string2);
				//else
				//cout << "String1 is not large enough for both strings.\n";
				//WARNING! If the array holding the first string isn’t large enough to hold both
				//strings, strcat will overflow the boundaries of the array.

				const int size=50;
				char a[size]= "eric ";
				char b[size]= "sakala";        
			//	string c=strcat(a,b);
			string c=strcpy(a,b);
				cout<<c<<endl;
				cout<<a[size]<<endl;
				char d[100] = "doing";
				cout<<strlen(d);



return 0;
}
