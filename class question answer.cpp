#include <iostream>
#include <cstdlib>
using namespace std;
class Array{
	private:
		double numList[10];
		public:
			void populateList();
			void printList();
			void printRange();
			void aprintAverage();
			void sortAssending();
			
		
};
 void Array:: populateList(){
 	cout<<"\n THIS PROGRAMME REQUIRES YOU TO PROVIVE 10  VALUES FOR THE ARRAY\n";
 	for(int i=0;i<10;i++){
 		cout<<"enter the number at : "<<(i+1)<<endl;
 		cin>>numList[i];
	 }
 }
 
 void Array::printList(){
 	for(int i=0;i<10;i++){
 		cout<<numList[i]<<" ";
	 }
 }
 void Array::aprintAverage(){
 double sum=0.0;
 double average=0.0;
 	for(int i=0;i<10;i++){
 	sum+=numList[i];	
	 }
	 average=sum/10;
	 cout<<"the average is : "<<endl;
 }
 void Array::sortAssending(){
 	for(int i=0;i<10;i++){
 		for(int j=i+1;j<10;j++){
 			if(numList[i]>numList[j]){
 				int temp=numList[i];
 				numList[i]=numList[j];
 				numList[j]=temp;
			 }
		 }
	 }
	 cout<<"here is the sorted array\n";
	 
	 for(int i=0;i<10;i++){
	 	cout<<numList[i]<<" ";
	 	
	 	
	 	
	 }
 }
 void Array::printRange(){
 	double min=numList[0];
 	double max=0;
 	for(int i=0;i<10;i++){
 		for(int j=i+1;j<10;j++){
 			if(numList[j]<min){
 				min=numList[j];
			 }
			 if(numList[j]>max){
			 	max=numList[j];
			 }
		 }
	 }
	 cout<<" the maximum number is = "<<max<<" and minimum is= "<<min<<endl;
 }
 class BankAccount{
 	private:
 	const double Taxrate=0.01;
 	double accountBalance;
 	string accountName;
 	public:
 		void checkBalance();
 		void withdraw(double);
 		void deposit(double);
 		BankAccount(string name,double startamount){
 			accountBalance=startamount;
 			accountName=name;
			 }
			 ~BankAccount(){
			 accountBalance=0.0;
 			accountName=" ";	
			 }
 	
 }; 
 
 void BankAccount::deposit(double amount){
 	accountBalance+=amount;
 	cout<<"Deposit Successful!"<<endl;
 }
 void BankAccount::checkBalance(){
 	cout<<"The Balance : "<<accountBalance<<endl;
 	
 }
 void BankAccount::withdraw(double withdrawAmount){
 	double withdrawCharge=withdrawAmount*Taxrate;
 	if(withdrawAmount>=accountBalance+withdrawCharge ){
 		cout<<"You have insufficient Balace!\nPlease try smaller amount"<<endl;
	 }
	 else if(withdrawAmount<1){
	 	cout<<"The entered amount is too small for withdraw\n";
	 	
	 }
	 else{
	 	accountBalance-=(withdrawAmount+withdrawCharge);
	 	 cout<<"thank you, withdraw successful\nYou availabe balance is : "<<accountBalance<<endl;
	 }
 }
 
 int main(){
 	Array num;
// 	num.populateList();
// 	num.printRange();
// 	num.sortAssending();
// 

string userName;
int choice;
double DepositAmount,WithdrawAmount,initialAmount;
system("cls");
cout<<"Enter your name ";
getline(cin,userName);
cout<<"enter the initial amount :";cin>>initialAmount;
BankAccount user1(userName,initialAmount);
do{
	cout<<"1.Withdraw"<<endl;
	cout<<"2.Deposit"<<endl;
	cout<<"3.Check Balance"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter choice : ";cin>>choice;
	switch(choice){
		case 1:
			cin.ignore();
			system("cls");
			cout<<"enter the amount : ";cin>>WithdrawAmount;
			user1.withdraw(WithdrawAmount);
			break;
			case 2:
				cin.ignore();
			system("cls");
			cout<<"enter the amout :";cin>>DepositAmount;
			user1.deposit(DepositAmount);
			break;
			case 3:
				cin.ignore();
			system("cls");
			user1.checkBalance();
			break;
			case 4:
				exit(0);
				break;
				default:
					cout<<"invalid input "<<endl;
	}
	
}while(choice!=4);

 	
 	return 0;
 }