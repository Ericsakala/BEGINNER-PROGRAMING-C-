#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;
void stringSorting(){
									
char name1[50],name2[50];
cout<<"enter the first name \n";
cin.getline(name1,50);
cout<<"enter another name \n";
cin.getline(name2,50);
if(strcmp(name1,name2)<0){
	cout<<"we follow the alpherbetical order of listing names \n";
	cout<<name1<<endl<<name2<<endl;

}
else if(strcmp(name1,name2)>0){
	cout<<"we follow the alpherbetical order of listing names \n";
	cout<<name2<<endl<<name1<<endl;

}
else
{
	cout<<"all the names are the same \n";
}
}

void itemsearch(){
	char finder[20];
							int i=0;
								char *strprt = NULL;
							char grocery[4][100]={"sugar","salt","boom","milk"};
						
							cout<<"enter the name of the product you are searching for \n";
							cin.getline(finder,20);
							for(int i=0;i<4;i++){
							strprt = strstr(grocery[i],finder);
								if(strprt!=NULL){
									break;
								}
							}
								if(strprt != NULL){
									cout<<grocery[i+1]<<endl;
								}
								else
								{
									cout<<"not found in this shop \n";
								}
}

int countChars(char *, char);
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


		
			  // (cstring libraly) : strcat,srtlen,strcpy,strncpy,strncat,strstr
					//Here is a program segment that uses the sizeof operator to test an array’s size before
				//strcat is called:
				//if (sizeof(string1) >= (strlen(string1) + strlen(string2) + 1))
				//strcat(string1, string2);
				//else
				//cout << "String1 is not large enough for both strings.\n";
				//WARNING! If the array holding the first string isn’t large enough to hold both
				//strings, strcat will overflow the boundaries of the array.

//				const int size=50;
//			char a[size]= "eric ";
//				char b[size]= "sakala";        
//				string c=strcat(a,b);
//			string c=strcpy(a,b);
//			cout<<c<<endl;
//				cout<<a[size]<<endl;
//			char d[100] = "doing";
//				cout<<strlen(d);
				
											
//	
//	int size=40;
//	char *p;
//	char a[size];
//	char com [1];
//	int counter = 0;
//	cout<<"enter any sentence with charators up to "<<(size-1)<<endl;
//	cin.getline(a,size);
//	cout<<"if you what to know how the letter appears in your sentencee please enter the letter you want to check \n";
//	cin.getline(com,10);
//	while(p != NULL){
//		if(*p == com[1]){
//		
//			counter++;
//				p++;
//		}
//	
//	}														
//				
//			cout<<"the letter "<<com<<" appears "<<counter<<" times in the sentence\n";
//	cout<<a;							
//								
		
		 const int SIZE = 51; // Array size
 char userString[SIZE]; // To hold a string
 char letter; // The character to count

// Get a string from the user.
 cout << "Enter a string (up to 50 characters): ";
 cin.getline(userString, SIZE);

 // Choose a character whose occurrences within the string will be counted.
 cout << "Enter a character and I will tell you how many\n";
 cout << "times it appears in the string: ";
 cin >> letter;

 // Display the number of times the character appears.
 cout << letter << " appears ";
 cout << countChars(userString, letter) << " times.\n";						
		return 0;
		}
