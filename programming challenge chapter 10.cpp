#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include<string>
#include <vector>
#include <unordered_map>
using namespace std;

void reveprint()	{
	cout<<"THIS FUNCTION PRINTS A WORD OR PHRASE IN REVERSE ORDER STARTING FROM THE END \n";
	cout<<endl;
	const int size =20;
	char name[size];
		cout<<"enter the name of anything you want \n";
		cin.getline(name,size);
		cout<<strrev(name);

	}

 countChars(char *p, char ch){
 	cout<<"THIS FUNCTION COUTS HOW MANY TIMES DOES A GEVEN LETTER APPEARS IN A WORD OR A SENTENCE \n";
 	cout<<endl;
	 int times = 0;							 // Number of times ch appears in the string

 											// Step through the string counting occurrences of ch.
	 while (*p != '\0')
	 {
		 if (*p == ch)						 // If the current character equals ch...
		 times++;							 // ... increment the counter
			p++;								 // Go to the next char in the string.
	 }

 return times;
 }

void wordcount(){
	cout<<"THIS PROGRAMME COUNTS THE NUMBER OF WORDS IN A SENTENCE \n";
	cout<<endl;
	const int size = 100;
	char words[size];
	char *p=words;
	int counter=1;
	cout<<"enter sentence with characters of about 99 \n";
	cin.getline(words,size);
	while(*p != '\0'){
		if(*p==' ')
		counter++;
		p++;
	}
cout<<"there are "<<counter<<" words in your sentence above";
}
void avletters(){
	cout<<"THIS PROGRAMME COUNTS THE NUMBER OF WORDS IN A SENTENCE \n";
	cout<<endl;
	const int size = 100;
	char words[size];
	char *p=words;
	int counter=1;
	double average;
	cout<<"enter sentence with characters of about 99 \n";
	cin.getline(words,size);
	while(*p != '\0'){
		if(*p==' ')
		counter++;

		p++;


	}
	average=strlen(words)/(counter);
	cout<<"average letters in a word = "<<average<<endl;
cout<<"there are "<<counter<<" words in your sentence above";
}
void capitalize(){
	const int size =200;
	string input;
	char *prt;
	bool a =true;
	cout<<"please enter the sentence of less than 200 characters \n";
	getline(cin,input);
for(char &prt : input){//pointing to the string 
	if (a && isalpha(prt))
	prt=toupper(prt);
	a=(prt=='.'||prt=='!'||prt=='? '||prt=='?'|| prt==' . '||prt==' '||prt=='. ');
//
	}

cout<<input;


}
void vowel_consonant(){

	string phrase;
	char *p;
	int counter=0;
	int timer =0;
	cout<<"enter the sentenece \n";
	getline(cin,phrase);
	for(char &p:phrase){
	if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u'){

		counter++;
	}
	else if(p=='b'||p=='c'||p=='d'||p=='f'||p=='g'||p=='h'||p=='j'||p=='k'||p=='l'||p=='m'||p=='n'||p=='p'||p=='q'||p=='r'||p=='s'||p=='t'||p=='v'||p=='w'||p=='x'||p=='y'||p=='z')
	{
	timer++;
	}
	}
	cout<<"there are "<<counter<<" vowels in this sentence \n";
	cout<<"there are "<<timer<<" consonants in this sentence \n";
	cout<<"1.continue"<<endl;
	cout<<"E.exit"<<endl;
	cout<<endl;
	cout<<"enter your choice\n";


}
 void particulars (){
	const int size = 20;
char firstname[size];
char midname[size];
char lastname[size];
char fullname[60];

const int sizes =3;
char b[sizes]={' '};
char a[sizes] ={','};
cout<<"enter your first name \n";
cin.getline(firstname,size);
cout<<"enter your middle name \n";
cin.getline(midname,size);
cout<<"enter your last name \n";
cin.getline(lastname,size);

strcat(fullname , lastname);
strcat(fullname , b);
strcat(fullname , firstname);
strcat(fullname ,a);
strcat(fullname , midname);
cout<<fullname;
}
void stringdigits(){

	string words;
	int result=0;

	cout<<"enter any word including digits inside \n";
	getline(cin,words);
	for(int i=0;i<words.length();i++){

			if(isdigit(words[i])){
			result =atoi(&words[i])+atoi(&words[i+1]);
			}
	}
cout<<result;
}
/*hold*/void frequentcharacter(){

	char *p;
	string input;
	cout<<"enter the sentence \n";
	getline(cin,input);
	for(char &p : input)
	{
		for(int i=0;i< input.length();i++)
		{
			for(int j=i+1;j<input.length();j++)
			{
			if(input[i]==input[j])
			{

				cout<<input[i];
			}
			}

		}

	}



}
/* HOLD*/void passverifier(){
vector<string> password;
string pass;
	cout<<"enter your password, with atleast captal \n letter a digit and small letters with seven charactesrs in total\n";
getline(cin,pass);
password.push(pass);

int n=password.size();
//	for(char &p:password){
//		for(int i=0;i<6;i++){
//
//		if( isupper(p)==password[i] && islower(p)==password[i] && isdigit(p)==password[i]){
//
//		}
//
//
//	}
//	cout<<"successfull\n";
//	}
if(n<7){
	cout<<"the password must be atleast 7 characters long\n";
}else{

for(int i=0; i<n;i++){
	if( isupper(password[i])==0 && islower(password[i])==0  ){
	cout<<"you have met the criteria\n";	
	break;	
	}
	else{
		cout<<"the password must be atleast  contain a captal  letter a digit and small letters with seven charactesrs\n";
		break;
	}
}
}




	}
void moscode(){
	string a;
	cout<<"enter a sentence \n";
	getline(cin,a);
	if(a=="a"||a=="A"){
		cout<<"_.._. ";
	}
	else if(a=="b"||a=="B"){
		cout<<"... ";
	}
	else if(a=="c"||a=="C"){
		cout<<"__. ";
	}
	else if(a=="d"||a=="D"){
		cout<<"_. ";
	}
}
void  maxmin(int number[],int size,int *max,int *min){
	for(int i=1;i<size;i++){
		if(number[i]<*min)
			*min=number[i];
			if(number[i]>*max)
				*max=number[i];


	} 
}
int romanNumeros(string a)
{
	int results;

	unordered_map<char,int>mynum{
	{'i',1},
	{'I',1},
	{'V',5},
	{'v',5},
	{'l',50},
	{'L',50},
	{'C',100},
	{'c',100},
	{'d',500},
	{'D',500},
	{'M',1000},
	{'m',1000},
	};




		for(int i=0;i<a.length();i++)
		{if(mynum[i]==mynum[i+1]&&mynum[i+1]==mynum[i+2]&&mynum[i+2]==mynum[i+3]&&mynum[i+3]==mynum[i+4]){

			cout<<"exceed limit\n";

		}
			else if(mynum[a[i]]<mynum[a[i+1]])
			{
				results-=mynum[a[i]];
			}
			else
			{
				results+=mynum[a[i]];
			}
		}
	return results;

}

int main(){
passverifier();
	
	
	
//int number[6]={5,8,1,6,18,9};
//int max=number[0];
//int min;
//maxmin(number,6,&max,&min);
//cout<<min<<endl;
//cout<<max<<endl;
/*string number;
int output;
cout<<"enter the roman numeral of your choice\n";
cin>>number;
output=romanNumeros(number);
cout<<output;*/
	/*
		 const int SIZE = 51; 						// Array size
 char userString[SIZE]; 							// To hold a string
 char letter;										 // The character to count
									// Get a string from the user.
 cout << "Enter a string (up to 50 characters): ";
 cin.getline(userString, SIZE);

														 // Choose a character whose occurrences within the string will be counted.
 cout << "Enter a character and I will tell you how many\n";
 cout << "times it appears in the sentece: ";
 cin >> letter;

														 // Display the number of times the character appears.
 cout << letter << " appears ";
 cout << countChars(userString, letter) << " times.\n";
 */


		return 0;
}
