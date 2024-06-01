#include <iostream>
#include <queue>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <vector>
using namespace std;
void readQuestionsFromFile();
struct Questions{
	int answer;
	string myquestions;
};
void questions( ){
	string questions[4]={
	"1.Which of the following correctly defines a variable in C++?\n",
	"2.What is the purpose of the #include directive in C++?\n",
	"3.How do you declare an integer variable named age in C++?\n",
	"4.Which of the following operators is used for arithmetic addition in C++?\n"
	
	};
	string answers[4]={
	"(a) A named location in memory to store data. \n(b) A keyword used to declare functions. \n(c) A symbol representing an operation.\n(d) A statement that controls program flow.\n	",
	"(a) To define user-created functions.\n(b) To include header files containing pre-defined functions.\n(c) To declare variables for use in the program.\n(d) To output data to the console.\n",
	"(a) int age = 0;\n(b) integer age;\n(c) #define age int\n(d) age (no declaration needed).\n",
	"(a) +\n(b) -\n(c) *\n(d) /\n"
	};
	queue<string>q;
	queue<string>ans;
	queue<char>correct;
	correct.push('A');
	correct.push('B');
	correct.push('A');
	correct.push('A');
	char useranswer;
	for(int i=0;i<4;i++){
		q.push(questions[i]);
		ans.push(answers[i]);
		
	}
	
	for(int i=0;i<4;i++){
		cout<<q.front();
		cout<<ans.front();
		cout<<"enetr the answer\n";
		cin>>useranswer;
		if(correct.front()==toupper(useranswer)){
			cout<<"correct\n";
		}else{
			cout<<"wrong answer\n";
			
		}
		
		cout<<endl;
		q.pop();
		ans.pop();
		correct.pop();
	}
	
	
	
}

int main(){
string name;
char answer;
ifstream read;
questions( );
//read.open("questions.txt");
//while(getline(read,name)){
//	cout<<name<<endl;
////	cout<<"enter the answer\n";
////	cin>>answer;
//}

return 0;	
}
void readQuestionsFromFile() {
	Questions q1[10];
	
    ifstream infile;
	infile.open("questions.txt");
    
       // int studentIndex = 0;//counter variable to keep track of the while loop..
        
	
		string tempFile;

          getline(infile,tempFile);
				int i=0;
        while (getline(infile, tempFile)) {
            stringstream parser(tempFile);
            string token;
            // Read name and student number..
            getline(parser, token, ',');
            
            q1[i].myquestions = token;
            getline(parser, token, ',');// it works with commas in a text file to read through
          int check=stoi(token);
		   q1[i].answer = check;
            
            
            i++;
            
        }
        
        for(int i=0;i<10;i++){
        	cout<<q1[i].myquestions<<endl;
		}
        infile.close();
    
}