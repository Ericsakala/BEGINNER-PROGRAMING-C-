#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string mergingStringLetters(string sentence1,string sentence2){
		 int n=sentence1.length();
	int m=sentence2.length();
	string combine;
	int i=0;
	int j=0;
	while(i<n &&j<m){
		combine+=sentence1[i++];
		combine+=sentence2[j++];
		
	}
	while(i<n){
		combine+=sentence1[i++];
	}
	while(j<m){
	combine+=sentence2[j++];	
	}
	return combine;

	
}
int lengthOfLastWord(string sentence){
	int length=0;
	int n=sentence.length();
	int i=0;
	while(i<n){
		if(sentence[i]==' '){
			length=0;
		}else{
			length++;
		}
		i++;
	}
	return length;
}
string largestBinaryString(string word){
	int n=word.size();
	int counter;
	string answer=" ";
	
	for(int i=0;i<n;i++){
		if(word[i]=='1'){
			counter++;
		}
	
		n-=counter;
		counter--;
	}
		while(counter--){
			answer+='1';
		}
		while(n--){
			answer+='0';
		}
	//	answer+='1';
	
	return answer;
}
int main(){
 unsigned int  x=65500;
x=x+300;
cout<<x<<endl;
x++;cout<<x;

	
}