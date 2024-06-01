
#include <iostream>  //helps us to acces input and output to the screan
#include <fstream> 		//enables us to read from and write to a file
#include <string>

#include <conio.h>

using namespace std;

int counter;
 
struct Innovator {   //decralation of structure to keep all the particulars of an innovator in one variable
    int  age;
    string firstName, SurName, Title_of_innovation, date, category, nrc, status; //structure parameters
};

void addinnovator() {//function for collecting data from the user and write them to the file
    Innovator innovator;
  
   
    ofstream file;
    file.open("record.txt", ios::app);
    cout << "Enter your first name: ";
    getline(cin, innovator.firstName);//geting data from the user
    cout << "Enter your surname: ";
    getline(cin, innovator.SurName);
    cout << "Enter the title of innovation: ";
    getline(cin, innovator.Title_of_innovation);
    cout << "Enter the date submitted: ";
    getline(cin, innovator.date);
    cout << "Enter the category of your innovation (WOODTECH,FOODTECH,METALTECH,IT)\n: ";
    getline(cin, innovator.category);
    cout << "Enter your age: ";
    cin >> innovator.age;
    cin.ignore();
    cout << "Enter your NRC/PASSPORT number: ";
    getline(cin, innovator.nrc);
      cout << "Patent Status (patented,in progress, or not required): ";
    getline(cin,innovator.status);
    counter++;
    //writing data to a file
	file << counter<<endl;
    file << innovator.firstName<< endl;
    file << innovator.SurName << endl;
    file << innovator.age << endl;
    file << innovator.nrc << endl;
    file << innovator.Title_of_innovation << endl;
    file << innovator.category << endl;
    file << innovator.date << endl;
    file << innovator.status << endl;
    file.close();
    file.open("id.txt");
    file << counter;
    file.close();
    cout << "The record has been saved successfully." << endl;

}

void print(Innovator s) {//the function for printing out data which has been read from the file
	
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "INNOVATOR NO             : "<<counter<<endl;
    cout << "FIRST NAME               : " << s.firstName << endl;
    cout << "SURNAME                  : " << s.SurName << endl;
    cout << "AGE                      : " << s.age << endl;
    cout << "NRC/PASSPORT             : " << s.nrc << endl;
    cout << "TITLE OF THE PROJECT     : " << s.Title_of_innovation << endl;
    cout << "CATEGORY                 : " << s.category<< endl;    
    cout << "DATE                     : " << s.date << endl;
    cout << "PATENT STATUS            : " << s.status << endl;
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

}

void display() { //the function for reading and displaying all data available in the file calles new record
    Innovator innovator;
    ifstream read;
    read.open("record.txt");
  
  while(!read.eof()) {
  	  
    	 read>>counter;
    	read.ignore();
       getline(read, innovator.firstName);
		//read>>innovator.firstName; //reading data from the file
       read >> innovator.SurName;
        read >> innovator.age;
        read.ignore();
        read >> innovator.nrc;
        read >> innovator.Title_of_innovation;
        read >> innovator.category;
        read >> innovator.date;
         read >> innovator.status;
        
      if(counter==0){
      
      	cout<<"\n************************************\n";
      	cout<<"no record found\n";
      	break;
	  }
       else{
       	read.ignore();
       	
	
         print(innovator);//calling the function for displaying data that has been read
         cout<<endl;   
     }
        
		}
        
     
    read.close();
}

int search() {
   string idN;
    cout << "Enter innovator's NRC/PASSPORT : ";//REQUESTING SEARCH IMPUT FROM THE USER
    getline(cin,idN);
cin.ignore();
    Innovator innovator;
    ifstream read;
    read.open("record.txt");//opening file record to check if what the user has requested is available or nor;
     while(!read.eof()) {
     //reading dta from the file
     	read>>counter;
     	read.ignore();
        getline(read,innovator.firstName);
        read >> innovator.SurName;
        read >> innovator.age;
        read.ignore();
        read >> innovator.nrc;
        read >> innovator.Title_of_innovation;
        read >> innovator.category;
        read >> innovator.date;
        read >> innovator.status;
        read.ignore();
    

        if (idN ==innovator.nrc) { //checking the if the id matches with the entered id
            
             print(innovator);
            return 1;
        }
        else{
        	cout<<"no record found\n";
        	break;
		}
    }
    read.close();
    return 0;
}

void deletedata() {
    Innovator innovator;
 //string del;
 cin.ignore();
 //cout<<"enter the id of the person you want to delete\n";
 //getline(cin,del);
    int del = search();
   cout << "Do you want to delete this record? (Press 1 to confirm): ";
    int choice;
    cin >> choice;
    cin.ignore();
    ofstream tempfile;
        tempfile.open("temp.txt",ios::out);
        ifstream read;
       	 read.open("record.txt",ios::in);
    
    while(!read.eof()) //if still reading data and havent reached at the end of file this condition will be true
		 {
			//reading the particilar data from the file to make it available for deletion
			read>>counter;			
            getline(read, innovator.firstName);
            //read >> innovator.SurName;
            getline(read,innovator.nrc);            
            getline(read,innovator.Title_of_innovation);
            getline(read,innovator.category);
            read >> innovator.age;
            read.ignore();
            getline(read,innovator.date);
            getline(read,innovator.status);
            
            		read>>counter;
				if(choice==1&&del!=counter){
				
            	tempfile << counter << endl;
                tempfile << innovator.firstName << endl;
                tempfile << innovator.SurName << endl;
                tempfile << innovator.nrc << endl;
                tempfile << innovator.Title_of_innovation << endl;
                tempfile << innovator.category << endl;
                tempfile << innovator.age << endl;
                tempfile << innovator.date << endl;
                tempfile << innovator.status<< endl;
            
            }
         

	   read.close();
        tempfile.close();
        remove("id.txt");
        
        remove("record.txt"); //removing the particular text information in the main file called new record
        rename("record.txt","temp.txt"); //appending the removed text to a tempelary file  
		cout<<"************************************\n";
		system("pause");  
		cout<<endl;  
        cout << "Data deleted successfully." << endl; //prompting the user about deletion process complete
       		cout<<"************************************\n";  
       		break;
	int main();
}
	
			}
    
     	

  
void updaterecord() {
    Innovator innovator;
    int id = search();//calling a search fuction to provide us with the infomation about to be updated
    cout << "Do you want to update this record? (Press 1 to confirm): ";//geting the autholization to proceed with data updating
    int choice;
    cin >> choice;
    cin.ignore();
    if (choice == 1) {
        Innovator newinnovator;
        cout << "Enter your first name: ";
        getline(cin, newinnovator.firstName);
        cout << "Enter your surname: ";
        getline(cin, newinnovator.SurName);
        cout << "Enter the title of innovation: ";
        getline(cin, newinnovator.Title_of_innovation);
        cout << "Enter the date submitted: ";
        getline(cin, newinnovator.date);
        cout << "Enter the category of your innovation: ";
        getline(cin, newinnovator.category);
        cout << "Enter your age: ";
        cin >> newinnovator.age;
        cin.ignore();

        ofstream tempfile;
        tempfile.open("temp.txt");//open the tempelary text file
        ifstream read;
        read.open("record.txt");//reading from the file

        if(!read.eof()) {
            read >> innovator.age;
            read.ignore();
            getline(read, innovator.firstName);
            read >> innovator.SurName;
            read >> innovator.nrc;
            read >> innovator.Title_of_innovation;
            read >> innovator.category;
            read >> innovator.date;
			read>>innovator.status;
            if (id!= counter) {
                tempfile << newinnovator.firstName << endl;
                tempfile << newinnovator.SurName << endl;
                tempfile << newinnovator.age << endl;
                tempfile << newinnovator.nrc << endl;
                tempfile << newinnovator.Title_of_innovation << endl;
                tempfile << newinnovator.category << endl;
                tempfile << newinnovator.date << endl;
                tempfile << newinnovator.status<< endl;
            } else {
                tempfile << innovator.firstName << endl;
                tempfile << innovator.SurName << endl;
                tempfile << innovator.age << endl;
                tempfile << innovator.nrc << endl;
                tempfile << innovator.Title_of_innovation << endl;
                tempfile << innovator.category << endl;
                tempfile << innovator.date << endl;
                tempfile << innovator.status << endl;
            }
       
        }

             read.close();
        tempfile.close();
        remove("record.txt");
        rename("temp.txt","record.txt");
        cout << "Data updated successfully." << endl;
    } else {
        cout << "Record not updated." << endl;
    }
}
bool Register2() {
	string username,password;
	ofstream file;
	file.open("security2.txt",ios::app);//opening file to keep security record for username and pass words
	cout<<"enter your username\n";
	cin>>username;
	cout<<"enter your password \n";//geting input from the user
	cin>>password;
	file<<username<<endl;
	file<<password<<endl;
	file.close();//closing the file after finished writting to it
	return 1;
}
bool Register() {
	string username,password;
	ofstream file;
	file.open("security.txt",ios::app);
	cout<<"enter your username\n";
	cin>>username;
	cout<<"enter your password \n";
	cin>>password;
	file<<username<<endl;
	file<<password<<endl;
	file.close();
	return 1;
}

bool login() {
	string username,password,user,pass;
	int temp;
	cout<<"enter your username\n";//getting the log in ccredentials from the user
	cin>>user;
	cout<<"enter your password \n";
	cin>>pass;
	ifstream check;
	check.open("security.txt");//opening the file containig user credentials
	getline(check,username);   //read the data from the file to make them available for comparing
	getline(check,password);
	if(user==username && pass==password) {//comparing data found in the file if it is the same with the provided ones

		return 1;  //if the comparison is successfully it returns 1.if not it returns 0 as boolean values
	} else {
		return 0;
	}

	check.close();

	return 1;

}

bool login2() {
	string username,password,user,pass;
	int temp;
	cout<<"enter your username\n";
	cin>>user;
	cout<<"enter your password \n";
	cin>>pass;
	ifstream check;
	check.open("security2.txt");
	getline(check,username);
	getline(check,password);
	if(user==username && pass==password) {

		return 1;
	} else {
		return 0;
	}

	check.close();

	return 1;

}

int main() {
	ifstream file;
   file.open("new record.txt");
	int choice;
	bool status;
	int option;
    ifstream read;
    read.open("id.txt");
    if (!read.fail()) {
        read >> counter;
    } 
	else {
        counter = 0;
    }
    read.close();
		system("Color 1F");					//displaying user menu
	cout<<"            -------------------------------------------------------------------------------------------------\n";
	cout<<"            **********************************|   Z-HUB INNOVATION    |**************************************\n";
	cout<<"            -------------------------------------------------------------------------------------------------\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          1.MANAGER                                                                             |\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          2.COORDINATOR                                                                         |\n";
	cout<<"            |                                                                                                |"<<endl;
	cout<<"            |          3.TECHNICIAN                                                                          |\n";
	cout<<"            |------------------------------------------------------------------------------------  ----------|\n";


	cout<<"                        enter choice : ";
	cin>>choice;
	system("cls");
	switch(choice) {
			case 1:
							cout<<"        ------------------------------------------------------------------------------------  ----------\n";
						cout<<endl;
						cout<<"\t\t1.REGISTER\n";
						cout<<"\t\t2.LOGIN\n";
						cout<<endl;
						cout<<"           ------------------------------------------------------------------------------------  ----------\n";
						int option;
						cout<<"enter your choice\n";
						cin>>option;
						cin.ignore();
						switch(option) {
							case 1:
								Register();
								main();
								system("pause");
								break;
							case 2:
								status = login();
					if(status) {
						system("cls");
					cout<<"----------------------------------------------------------------------------------------------\n";
					cout<<"\tlogin successful\n";
					cout<<"----------------------------------------------------------------------------------------------\n";
			while (true) {
				//displaying the main menu
					        cout << "*************************************************************" << endl;
					        cout << "1. Create record" << endl;
					        cout << "2. Display all records" << endl;
					        cout << "3. Delete record" << endl;
					        cout << "4. Search record" << endl;
					        cout << "5. Update record" << endl;
					        cout << "6. Exit" << endl;
					        cout << "*************************************************************" << endl;
					        cout << "Enter your option: ";
					        cin >> option;
					
		  switch (option) {//swich cases to check the inputs gets from the user
					            case 1:
					            
					                cin.ignore();//ignoring trailling spaces in memory
					            
					                addinnovator();
					                break;
					            case 2:
					                display();
					                break;
					            case 3:
					                deletedata();
					                break;
					            case 4:
					                cin.ignore();
					                search();
					                break;
					            case 5:
					                updaterecord();
					                break;
					            case 6:
					            	main();
					                default:
					                	//prompting the user for the wrong entry
					                	cout<<"wrong choice please choose from the options provided\n";
					                	main();
					       }
					   }
			        	
									system("pause");
									return 1;
								}
								else
							   {
							   	
									cout<<"login failed!\n check your username or password and try again"<<endl;
									system("pause");
									main();
									
								}
								break;
									default:
							cout<<"wrong choice\n";
						break;
						}
					
						case 2:
							system("cls");
	
							cout<<"     ------------------------------------------------------------------------------------  ----------\n";
						cout<<endl;
						cout<<"\t\t1.REGISTER\n";
						cout<<"\t\t2.LOGIN\n";
						cout<<endl;
						cout<<"        ------------------------------------------------------------------------------------  ----------\n";
						int codoption;
						cout<<"enter your choice\n";
						cin>>codoption;
						cin.ignore();
						switch(codoption) {
							case 1:
								system("cls");
								Register2();
								system("cls");
								system("pause");
								main();
								break;
							case 2:
								system("cls");
								status = login2();
					if(status) {
					cout<<"----------------------------------------------------------------------------------------------|\n";
					cout<<"\tlogin successful\n";
					cout<<"----------------------------------------------------------------------------------------------|\n";
					do{
					
			while (true) {//displaying the menue for the coordinator
					        cout << "*************************************************************" << endl;
					        cout << "1. Create record" << endl;
					        cout << "2. Display all records" << endl;
					        cout << "3. Delete record" << endl;
					        cout << "4. Search record" << endl;
					        cout << "5. Update record" << endl;
					        cout << "6. Exit" << endl;
					        cout << "*************************************************************" << endl;
					        cout << "Enter your option: ";
					        cin >> option;
					
		  switch (option) {
					            case 1:
					            system("cls");
					                cin.ignore();
					                addinnovator();
					                break;
					            case 2:
					            	system("cls");
					                display();
					                break;
					            case 3:
					            	system("cls");
					               deletedata();
					                
					                break;
					            case 4:
					            	system("cls");
					                cin.ignore();
					                search();
					                break;
					            case 5:
					            	system("cls");
					                updaterecord();
					                break;
					            case 6:
					            	system("cls");
					            	main();
					                default:
					                	cout<<"wrong choice please choose from the options provided\n";
					                	main();
					       }
					   }
			        
									system("pause");
									system("cls");
								}while(option!=6);
									return 1;
								}
								else
							   {
									cout<<"login failed!\n check your username or password and try again"<<endl;
									system("pause");
									main();
									
								}
								break;
									default:
							cout<<"wrong choice\n";
						break;
						}
					
				break;
					case 3:
					int techchoice;	
								do{
							
						  cout << "*************************************************************" << endl;
					        
					        cout << "1. Display all records" << endl;
					        cout << "2. Search record" << endl;
					        cout << "3. Exit" << endl;
					        cout << "*************************************************************" << endl;
					        
					        cout<<"enter your choice\n";
					        cin>>techchoice;
					        switch(techchoice){
					        	case 1:
					        		cin.ignore();
					        			system("cls");
					                display();
					                system("pause");
					                	system("cls");
					                break;
					        		case 2:
					        			system("cls");
					        		  cin.ignore();
					                search();
					                break;	
					                case 3:
					                	system("cls");
					                	main();
					                	break;
					                
					            
					                		default:
					                			cout<<"wrong choice please chose from above\n";
					                			sleep(600);
					        					break;
					        					}
					        			}while(techchoice!=3);
					
					 
					default:				
						cout<<"wrong entry!\n Chose from choices above\n";
						main();
						system("cls");
						break;
							
		getch();						}

	return 0;
}