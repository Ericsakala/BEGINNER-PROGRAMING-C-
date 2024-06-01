#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
#include <windows.h>

using namespace std;

const int maxrow = 40;

string stdNRC[maxrow] = {};
string stdFirstName[maxrow] = {};
string stdSurname[maxrow] = {};
string stdAge[maxrow] = {};
string stdTitleOfInnovation[maxrow] = {};
string stdDateSubmitted[maxrow] = {};
string stdPatentStatus[maxrow] = {};
string stdInnovationCategory[maxrow] = {};

string GTStdNRC[maxrow] = {};
string GTStdFirstName[maxrow] = {};
string GTStdSurname[maxrow] = {};
string GTAge[maxrow] = {};
string GTStdtdTitleOfInnovation[maxrow] = {};
string GTDateSubmitted[maxrow] = {};
string GTPatentStatus[maxrow] = {};
string GTInnovationCategory[maxrow] = {};

//This function reads data from a Innovators file once it is called upon
void openfile_Innovators()
{
    string line;
    ifstream myfile;
    myfile.open("Innovator.txt");
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
    		cout << line << endl;
		}
		myfile.close();
    }

}

//Function stores details of innovators in there corresponding arrays
void addInnovtor()
{
    string GT_nrc;
    string GT_firstname;
    string GT_surname;
    string GT_age;
    string GT_title;
    string GT_date;
    string GT_patent;
    string GT_innovationCategory;

    //This command allows to get separately without mix up with other command/line
    cin.ignore();

    cout << "\t\t\t\t\tEnter NRC/Passport: ";
    getline(cin,GT_nrc);
    cout << "\t\t\t\t\tEnter First Name: ";
    getline(cin,GT_firstname);
    cout << "\t\t\t\t\tEnter Surname Name: ";
    getline(cin,GT_surname);
    cout << "\t\t\t\t\tAge: ";
    getline(cin,GT_age);
    cout << "\t\t\t\t\tTitle of Innovation: ";
    getline(cin,GT_title);
    cout << "\t\t\t\t\tDate Submitted: ";
    getline(cin,GT_date);
    cout << "\t\t\t\t\tPatent Status: ";
    getline(cin,GT_patent);
    cout << "\t\t\t\t\tInnovation Category: ";
    getline(cin,GT_innovationCategory);

    for(int x = 0; x < maxrow; x++)
    {
        if(GTStdNRC[x] == "\0")
        {
             stdNRC[x] = GT_nrc;
            stdFirstName[x] = GT_firstname;
            stdSurname[x] = GT_surname;
            stdAge[x] = GT_age;
            stdInnovationCategory[x] = GT_title;
            stdDateSubmitted[x] = GT_date;
            stdPatentStatus[x] = GT_patent;
            stdInnovationCategory[x] = GT_innovationCategory;

            break;
        }
    }
}

// this function displays pupils written to arrays on the screen
void ListInnovators()
{


            system("cls");

            cout << "\t\t\t\t\t ------------------------------------" <<endl;
            cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
            cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
            cout << "No.  | NRC  |  FIRST NAME | SURNAME | AGE | TITLE | DATE | PATENT STATUS | INNOVATION CATEGORY " << endl;
            cout << "\t\t\t------------------------------------------------------------------------------------------------------------" << endl;

            int counter = 0;
            for(int x = 0; x < maxrow; x++)
            {
                if (stdNRC[x] != "\0")
                {
                    
                    cout << "\t\t\t  " << counter << "     " << stdNRC[x];
                    cout << (x+1)<< stdFirstName[x] <<"\t" << stdSurname[x] << "\t" << stdAge[x] << "\n" << stdTitleOfInnovation[x] << "\t" << stdDateSubmitted <<"\t" << stdPatentStatus << "\t" <<stdInnovationCategory << endl;
					counter++;
                }
            }
            //there's no record in our array
            if(counter == 0)
            {

                cout << "\t\t\t\t\t\t\tNo Record Found!" << endl;
            }

                cout << "\t\t\t--------------------------------------------------------------------------------" << endl;
}

//this programs compares input value with data stored in our array
// if counter variable is == 0, do data is displayed
void Search_Innovator(string search)
{
    system("cls");
    cout << "\t\t\t\t\t ------------------------------------" <<endl;
    cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
    cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
    int counter = 0;
    for(int x = 0; x < maxrow; x++)
    {

        if (stdNRC[x] == search)
        {
            counter++;
            cout << "\t\t\t  " << counter << "       " << stdNRC[x];
            cout <<(x+1) <<stdFirstName[x] << "\t" << stdSurname[x] << "\t" << stdAge[x] << "\n" << stdTitleOfInnovation[x] << "\t" << stdDateSubmitted <<"\t" << stdPatentStatus << "\t" <<stdInnovationCategory << endl;


            break;
        }
    }

    if(counter == 0)
    {

        cout << "\t\t\t\t\t\tNo Innovator Record Found!" << endl;

    }
    cout << "\t\t\t------------------------------------------------------------------------------------------------------" << endl;

}

//works same as the the search function except after the value has been searched it compared
//and replace if values match
void EditInnovatorRecord(string search)
{
    string firstN;
    string surname;
    string ageX;
    string title;
    string date;
    string patent;
    string innovation;

    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(stdNRC[x] == search)
        {
            counter++;

            cout << "\t\t\t\t\tEnter New-First Name: ";
            getline(cin,firstN);
            stdFirstName[x] = firstN;
            cout << "\t\t\t\t\tEnter New-Surname: ";
            getline(cin,surname);
            stdSurname[x] = surname;
            cout << "\t\t\t\t\tEnter New-Age: ";
            getline(cin,ageX);
            stdAge[x] = ageX;
            cout << "\t\t\t\t\tEnter New-Title of Innovation: ";
            getline(cin,title);
            stdTitleOfInnovation[x] = title;
            cout << "\t\t\t\t\tEnter New-Date Submitted: ";
            getline(cin,date);
            stdDateSubmitted[x] = date;
            cout << "\t\t\t\t\tEnter New-Patent Status: ";
            getline(cin,patent);
            stdPatentStatus[x] = patent;
            cout << "\t\t\t\t\tEnter New-Innovation Category: ";
            getline(cin,innovation);
            stdInnovationCategory[x] = innovation;

            cout << "\n\t\t\t\t\tUpdate Successful!" << endl;
            break;
        }
    }
    if (counter == 0)
    {
        cout << "\n\t\t\t\t\tProcessing..." << endl;
        Sleep(1000);
        system("cls");
        cout << "\n\t\t\t\tOops! seems there isn't a Match. Please Retry again in the main Menu\n" << endl;
    }

}

//works same as the the search function except after the value has been searched it is then compared
//and deleted if values ID match
void Delete_InnovatorRecord(string search)
{


    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(stdNRC[x] == search)
        {
            counter++;

            stdNRC[x] = "";
            stdFirstName[x] = "";
            stdSurname[x] = "";
            stdAge[x] = "";
            stdTitleOfInnovation[x] = "";
            stdDateSubmitted[x] = "";
            stdPatentStatus[x] = "";
            stdInnovationCategory[x] = "";

            cout << "\n\t\t\t\t\tRecord Deleted Successfully!" << endl;

        }

    }
    if (counter == 0)
    {
        cout << "\n\t\t\t\t\tOops! NRC Number does not exist!\n" << endl;
    }
}

// the function writes data to the file document using arrays
void SavDataOfInnovator()
{
    ofstream myfile;
    myfile.open("innovator.txt",ios::app);

    for(int x = 0; x < maxrow; x++)
    {
        if(stdNRC[x] == "\0")
        {
        	   myfile<<(x+1) <<stdFirstName[x] <<"\t"<<stdSurname[x] <<"\t"  << stdAge[x]<< "\t" << stdTitleOfInnovation[x] <<"\t"<< stdDateSubmitted <<"\t" << stdPatentStatus<< "\t"<< stdInnovationCategory << endl;

           
        }
        else
        {
        	
         break;  

        }
    }

	myfile.close();
}

void HeadMenu()
{
    system("cls");
    openfile_Innovators();
	string stdNRC;
	string GTStdNRC;
	int choice;
	system ("cls");
	int option;

	  do
      {
            cout << "\t\t\t\t\t ------------------------------------" <<endl;
        	cout << "\t\t\t\t\t| Z-HUB INFORNMENT RECORDING SYSTEM  |" <<endl;
        	cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
        	cout << "\t\t\t\t\t\t1. ADD INNOVATOR" << endl;
        	cout << "\t\t\t\t\t\t2. DELETE INNOVATOR RECORD" << endl;
        	cout << "\t\t\t\t\t\t3. SEARCH FOR INNOVATOR" << endl;
        	cout << "\t\t\t\t\t\t4. EDIT INNOVATOR RECORD" << endl;
        	cout << "\t\t\t\t\t\t5. DISPLAY ALL INNOVATORS BY INNOVATION CATEGORY" << endl;
        	cout << "\t\t\t\t\t\t6. EXIT AND SAVE TO TEXTFILE\n" << endl;


            cout << "\t\t\t\t\t\tEnter Option: ";
            cin >> option;

            switch(option)
            {
            	case 1:

                    			addInnovtor();
				                    system("cls");
				                    cout << "\n\t\t\t\t\tSaving..." << endl;
				                    Sleep(500);
				                    system("cls");
				                    SavDataOfInnovator();
				                    break;

				case 2:

							cout << "\n\t\t\t\t\tProcessing..." << endl;
        					Sleep(500);
        					system("cls");
               				cin.ignore();

                            cout << "\n\t\t\t\t\tDelete Student Record by NRC: ";
                            getline(cin,stdNRC);
                            Delete_InnovatorRecord(stdNRC);
                            SavDataOfInnovator();
                            break;


	            case 3:
	            			cout << "\n\t\t\t\t\tProcessing..." << endl;
	        				Sleep(500);
	        				system("cls");
	               			cin.ignore();

                            cout << "\n\t\t\t\t\tSearch by Innovator NRC: ";
                            getline(cin,stdNRC);
                            Search_Innovator(stdNRC);
                            break;


	          	case 4:
							cout << "\n\t\t\t\t\tProcessing..." << endl;
		        			Sleep(500);
		        			system("cls");
		               		cin.ignore();

                            cout << "\n\t\t\t\t\tEdit Innovator NRC: ";
                            getline(cin,stdNRC);
                            EditInnovatorRecord(stdNRC);
                            SavDataOfInnovator();
                            break;

	            case 5:
                                    cout << "\n\t\t\t\t\tProcessing..." << endl;
	                        	    Sleep(500);
	                            	system("cls");
	                            	ListInnovators();
	                            	break;

            }
      }while(option != 6);

             		cout << "\n\t\t\t\t\tProcessing..." << endl;
             			Sleep(3000);
           			 		cout << "\n\t\t\t\t\tExiting..." << endl;

}

void SubMenu()
{
	system("cls");


    openfile_Innovators();
	string stdNRC;
	string GTStdNRC;
	int choice;
	system ("cls");
	int option;

	  do
      {
            cout << "\t\t\t\t\t --------------------------------------------" <<endl;
        	cout << "\t\t\t\t\t| Z-HUB COMPANY INFORNMENT RECORDING SYSTEM  |" <<endl;
        	cout << "\t\t\t\t\t --------------------------------------------\n" <<endl;
        	cout << "\t\t\t\t\t\t1. SEARCH FOR INNOVATOR" << endl;
        	cout << "\t\t\t\t\t\t2. DISPLAY ALL INNOVATORS BY INNOVATION CATEGORY" << endl;
        	cout << "\t\t\t\t\t\t3. EXIT AND SAVE TO TEXTFILE\n" << endl;

            cout << "\t\t\t\t\t\tEnter Option: ";
            cin >> option;

            switch(option)
            {
            case 1:
            	cout << "\n\t\t\t\t\tProcessing..." << endl;
        			Sleep(500);
        			system("cls");
               		cin.ignore();

                            	cout << "\n\t\t\t\t\tSearch by Student NRC: ";
                    			getline(cin,GTStdNRC);
                    			cin.ignore();
                            	Search_Innovator(GTStdNRC);
                            	break;

            case 2:
                     	       cout << "\n\t\t\t\t\tProcessing..." ;
                        	    Sleep(500);
                            	system("cls");
                            	ListInnovators();
                        	    break;
            }

      }while(option != 3);

             cout << "\n\t\t\t\t\tProcessing..." << endl;
                Sleep(3000);
            cout << "\n\t\t\t\t\tExiting..." << endl;

}

//This function allows for authentication for user role
void Manager_Login()
{


	int userID=2023;
	string password="CBUADMIN";
	int ID;
	int n=1;
	string passcode;


//this loop controls how many times the user will be given chance to to correct details
    while(n<5)
				{
					cout<<"\n\t\t\t\t\t\tEnter Admin ID: ";
					cin>>ID;
					cout<<"\t\t\t\t\t\tEnter Password: ";
					cin>>passcode;
					cout<<"\n\t\t\t\tPlease wait this may take a few seconds............";
					Sleep(3000);

		 			 system("cls");

						if ( ID==userID && passcode==password || ID==userID && passcode==password )
   						 {
					  			HeadMenu();
								break;
			    		 }

						else
							cout<<"\n\t\t\t\t\t\tRe-Enter your details again";
								n++;
				}
						    				if(n==5)
												{
													system("cls");
													cout <<"\t\t\t\t\t\tOops! Seems you've finished retry Entries" << endl;
													cout << "\n\t\t\t\t\t\tSYSTEM LOCKED!" << endl;
													system("pause");
												}

}

//This function allows for authentication for user role
void Technician_Login()
{


	int userID=2023;
	string password="CBUTECH";
	int ID;
	int n=1;
	string passcode;


//this loop controls how many times the user will be given chance to to correct details
    while(n<5)
				{
					cout<<"\n\t\t\t\t\t\tEnter Admin ID: ";
					cin>>ID;
					cout<<"\t\t\t\t\t\tEnter Password: ";
					cin>>passcode;
					cout<<"\n\t\t\t\tPlease wait this may take a few seconds............";
					Sleep(3000);

		 			 system("cls");

						if (ID==userID && passcode==password || ID==userID && passcode==password )
   						 {
					  			SubMenu();
								break;
			    		 }

						else
							cout<<"\n\t\t\t\t\t\tRe-Enter your details again";
								n++;
				}
						    				if(n==5)
												{
													system("cls");
													cout <<"\t\t\t\t\t\tOops! Seems you've finished retry Entries" << endl;
													cout << "\n\t\t\t\t\t\tSYSTEM LOCKED!" << endl;
													system("pause");
												}

}

void LOGIN()
{
	int option;
	const int MANAGER = 1;
	const int COORDINATOR = 2;
	const int TECHNICIAN = 3;

    cout << "\t\t\t\t\t -------------------------------------------" <<endl;
	cout << "\t\t\t\t\t|**********WELCOME Z-HUB COMPANY************|" <<endl;
    cout << "\t\t\t\t\t|         INFORMATION STORAGE SYSTEM        |" <<endl;
    cout << "\t\t\t\t\t -------------------------------------------\n" <<endl;
	cout << "\n\t\t\t\t\t1. MANAGER" << endl;
    cout << "\t\t\t\t\t2. COORDINATOR" << endl;
    cout << "\t\t\t\t\t3. TECHNICIAN" << endl;

			do{
					cout <<"\n\t\t\t\t\tLOGIN AS: ";
	 				cin>>option;
					cout <<"\n\t\t\t\t\tProcessing............";
					Sleep(1000);
						if (option == MANAGER)
						{
							system("cls");
	 						Manager_Login();
						}
								else if (option == COORDINATOR)
								{
									system("cls");
	 								Manager_Login();
								}
								else if (option == TECHNICIAN)
								{
									system("cls");
									Technician_Login();
								}
										else
										{
											system("cls");
											cout<<"\t\t\t\t\t\tEnter valid option\n";
										}

				}while(option>2 || option<1);

}

void CHOOSE()
{
	system ("cls");
    system("Color 3F"); // color XY, X = background color, Y= text color
    int option;
    char ans, Y, y;

	const int MANAGER = 1;
	const int COORDINATER = 2;
	const int TECHNICIAN = 3;
    cout <<"\n\n\n\n\n\n\n\n\t\t *WELCOME TO Z-HUB COMPANY INFORMATION MANAGEMENT SYSTEM *";
    getch();

	cout <<"\n\n\n\t\t\t\tDo yo wish to proceed to login [Y/N]:  ";
	cout <<"\n\t\t\t\tDo yo wish to proceed to login [Y/N]:  ";
	cin>>ans;
			cout <<"\n\t\t\t\t\tstatus:processing........";
			Sleep(1000);
			system("cls");

				if (ans == 'y' || ans == 'Y')
					{
					  LOGIN();
					}
					else
					{
						cout << "\t\t\t\t\tBYE :)...";

					}
}

int main()
{
	CHOOSE();

	return 0;
}
