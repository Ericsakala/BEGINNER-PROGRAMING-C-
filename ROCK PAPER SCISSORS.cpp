#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int main(){
system("Color 1F");

int computer=0;
srand((unsigned int) time(NULL));
	int personal_total=0;
	int computer_total=0;
	int counter=0;
	int move,num;
	bool draw=false;
	cout<<"enter the number of times you want to play\n";
		cin>>num;
	do{

	cout<<"1.ROCK\n";
	cout<<"2.PAPER\n";
	cout<<"3.SCISSORS\n";
		cout<<"enter your move\n";
		cin>>move;
	computer=(rand()%3)+1;
	draw=false;
	if(computer==move){
		cout<<"draw\n";
		 personal_total++;
		 	computer_total++;
		system("pause");
			 system("cls");
		draw=true;

		move++;

	}

			else if(computer==PAPER && move == ROCK){
				cout<<"paper beats rock\n You lose!\n";
				 computer_total++;
				 system("pause");
				 system("cls");
			}
		else if(computer ==SCISSORS && move == PAPER){
			cout<<"scissors beats paper\nYOU LOSE!\n";
			computer_total++;
			system("pause");
			system("cls");
			}

			else if(computer==ROCK && move==SCISSORS){
				cout<<"rock beats scissors\n You lose!\n";
				computer_total++;
				system("pause");
				system("cls");
			}
		else if(computer ==SCISSORS && move == ROCK){
			cout<<"rock beats scissors\n You WIN !\n";
			 personal_total++;
			 system("pause");
			 system("cls");
			}

			else if(computer==PAPER && move == SCISSORS){
				cout<<"scissors beats paper\n You win!\n";
				 personal_total++;
				 system("pause");
				 system("cls");
			}
		else if(computer ==ROCK && move==PAPER){
			cout<<"paper beats rock\nYOU win!\n";
			 personal_total++;
			 system("pause");
			 system("cls");
			}
			counter++;


	}while( counter<num);

cout<<"computer score = "<<computer_total<<endl;
cout<<"your score = "<< personal_total<<endl;
if(computer_total<personal_total)
{
	cout<<"CONGRATULATIONS!!! YOU ARE THE WINNER\n";
}else if(computer_total>personal_total)
{
	cout<<"good lucky next time!! computer have beaten you\n";
}
else
{
	cout<<"THE GAME HAS ENDED IN A DRAW\n";
}
	return 0;
}
