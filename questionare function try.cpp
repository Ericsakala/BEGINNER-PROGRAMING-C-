#include <iostream>
#include <cstdlib>
#include <fstream>
#include <queue>
#include <sstream>

using namespace std;

int Questions(string,char,char);
queue<string>Quest;
void myQuestions();

int QuestionsLoad(char correctAnswer,char userAnswer){
	
	
	
	if(correctAnswer==toupper(userAnswer)){
			system ( "color a");
	cout<<"congratulations!\nthe answer is correct\n";
	


//	cout<<"EXPLANATION;\n";
	
	
	exit(0);
	
	}
	else
	{
	system ( "color c");
	cout<<"wrong answer!\n ";
	
	return 0;

	
	}
	
	return 1;	
	
}

string questionare(string quest,char answer){
	return quest;
}
void myQuestions(){
string Q1,Q2,Q3;
	Q1=questionare("What is the suitable object to carry water\n A.Basket\tB.Tea strainer\tC.Bucket\n",'C');
	Q2=questionare("What is the capital city of zambia, \n A.lilongwe\tB.Lusaka\tC.Copperbelt",'B');
	Q3=questionare("True or false, a global variable has a local scope\nA.False\tB.True",'A');

Quest.push(Q1);
Quest.push(Q2);
Quest.push(Q3);
cout<<Quest.front();
 char answer;
// for(int i=0;i<3;i++){
// 	QuestionsLoad(char correctAnswer,char userAnswer){
// 	cout<<Quest.front();
// 	cin>>answer;
// }

}
	void Loader(){
		
		int counter=0;
		
		do{
			char answer,correct;
	
	string question="What is the suitable object to carry water\n A.Basket\tB.Tea strainer\tC.Bucket\n";
	cout<<question;
	cin>>answer;
	correct='C';
	string Exp="same in programing we have variables which are containers\nand these variables have a type of data it can store\n just like you cannot store water in a basket\n";
	
	//QuestionsLoad(Exp,correct,answer);
	counter ++;
			
		}while(counter<3);
		
		
	}
	
	
//void questionExtractor(){
//	string question;
//	char correct_answer;display_question =temp;
//	char user_answer;
//	string display_question;
//string temp;
//	ifstream read;
//	read.open("questions.txt");
//	if(read.eof()){
//	
//while(read>>temp){
//cout<<temp;
//	int n=temp.size();
//	 
//	//for(int i=0;i<n;i++){
//	
//	 
////	if(temp[i]=='3')
////	{
////	correct_answer=toupper('c');
////	temp[i]--;
////	}
////		else if(temp[i]=='2')
////		{
////		correct_answer=toupper('b');
////		temp[i]--;
////		}
////		else if(temp[i]=='1')
////		{
////		correct_answer=toupper('a');
////		temp[i]--;
////		}
////		else
////		{
////		cout<<"error"<<endl;
////		}
//		
//display_question =temp;
//
////}
//}
//}
//cout<<display_question ;
//
//}
//	

int main(){
	myQuestions();
//Loader();
	//questionExtractor();
	
//	queue<int>num;
//	num.push(2);
//		num.push(3);
//			num.push(6);
//				num.push(9);
//				
// while(!num.empty()){
// 	cout<<num.front()<<endl;
// 	num.pop();
// 	
// }				
//				
				
}