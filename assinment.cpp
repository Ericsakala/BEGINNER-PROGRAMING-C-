
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

const int maxrow = 5;
string StdName[maxrow] = {};
string StdID[maxrow] = {};
string Grade[maxrow] = {};
string StdGphone[maxrow] = {};
string Age[maxrow] = {};

string GTStdName[maxrow] = {};
string GTStdID[maxrow] = {};
string GTGrade[maxrow] = {};
string GTStdGphone[maxrow] = {};
string GTAge[maxrow] = {};


void openfile_GOne() //This function reads data from a GradeOne file once it is called upon
{
    string line;
    ifstream myfile;
    myfile.open("GRADEONE.txt");
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
    		cout << line << endl;
		}
		myfile.close();
    }

}
void openfile_GTwo()//Similarly this function reads data from a GradeTwo file once it is called upon
{

    string line;
    ifstream myfile;
    myfile.open("GRADETWO.txt");
    if(myfile.is_open())
    {

        while(getline(myfile, line))// reads data from file line by line as it is stored
        {
            cout << line << endl;

        }
        myfile.close();
    }


}
void GRADEONE() // This function stores data of grade one students into there corresponfing arrays
{

    char name[50];
    char StdIdNo[5];
    char age[10];
    char PhoneNo[50];

    cin.ignore();
    cout << "\t\t\t\t\tEnter Student ID: ";
    cin.getline(StdIdNo, 5);
    cout << "\t\t\t\t\tEnter Student FullName: ";
    cin.getline(name, 50);
    cout << "\t\t\t\t\tStudent Age: ";
    cin.getline(age, 10);
    cout << "\t\t\t\t\tStudent's Guardian Contact No: ";
    cin.getline(PhoneNo, 50);

    for(int x = 0; x < maxrow; x++)
    {
        if(StdID[x] == "\0") // this if statement verifies if the array doesn't contain any data before the program inserts data in the array
        					// if the array are empty the program the inserts data from the user into the arrays
        {
            StdID[x] = StdIdNo;
            StdName[x] = name;
            Age[x] = age;
            StdGphone[x] = PhoneNo;

            break;
        }

    }

}
void GRADETWO() //Simarly this works the same as the GradeOne function
{               //all data is stored in arrays before getting stored in a file

    char GT_name[50];
    char GT_StdIdNo[5];
    char GT_age[10];
    char GT_PhoneNo[50];

    cin.ignore(); //this command lets us get input separately without any mix up with the other input commands/line
    cout << "\t\t\t\t\tEnter Student ID: ";
    cin.getline(GT_StdIdNo, 5);
    cout << "\t\t\t\t\tEnter Student FullName: ";
    cin.getline(GT_name, 50);
    cout << "\t\t\t\t\tStudent Age: ";
    cin.getline(GT_age, 10);
    cout << "\t\t\t\t\tStudent's Guardian Contact No: ";
    cin.getline(GT_PhoneNo, 50);

    for(int x = 0; x < maxrow; x++)
    {
        if(GTStdID[x] == "\0")
        {
            GTStdID[x] = GT_StdIdNo;
            GTStdName[x] = GT_name;
            GTAge[x] = GT_age;
            GTStdGphone[x] = GT_PhoneNo;

            break;
        }
    }
}
void ListPupils_GOne() // this function displays pupils written to arrays on the screen
{


            system("cls");

            cout << "\t\t\t\t\t ------------------------------------" <<endl;
            cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
            cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
            cout << "\t\t\tNo.  |     ID    |    NAME              |   AGE    |  PHONE No.   " << endl;
            cout << "\t\t\t---------------------------------------------------------------------------" << endl;

            int counter = 0;
            for(int x = 0; x < maxrow; x++)
            {
                if (StdID[x] != "\0")
                {
                    counter++;
                    cout << "\t\t\t  " << counter << "     " << StdID[x];
                    cout << "\t\t" << StdName[x] << "\t" << Age[x] << "\t\t" << StdGphone[x] << endl;

                }
            }
            if(counter == 0)//there's no record in our array
            {

                cout << "\t\t\t\t\t\t\tNo Record Found!" << endl;
            }

                cout << "\t\t\t---------------------------------------------------------------------------" << endl;
}
void ListPupils_GTwo()
{

    system("cls");

    cout << "\t\t\t\t\t ------------------------------------" <<endl;
    cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
    cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
    cout << "\t\t\tNo.  |     ID    |    NAME              |   AGE    |  PHONE No.   " << endl;
    cout << "\t\t\t---------------------------------------------------------------------------" << endl;

    int counter = 0;
    for(int x = 0; x < maxrow; x++)
    {
        if (GTStdID[x] != "\0")
        {
            counter++;
            cout << "\t\t\t  " << counter << "     " << GTStdID[x];
            cout << "\t\t" << GTStdName[x] << "\t" << GTAge[x] << "\t\t" << GTStdGphone[x] << endl;

        }
    }
    if(counter == 0)
    {

        cout << "\t\t\t\t\t\t\tNo Record Found!" << endl;
    }

        cout << "\t\t\t---------------------------------------------------------------------------" << endl;
}
void Search_GORecord(string search) //this programs compares input value with data stored in our array
{                                   // if counter variable is == 0, do data is displayed
    system("cls");
    cout << "\t\t\t\t\t ------------------------------------" <<endl;
    cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
    cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
    int counter = 0;
    for(int x = 0; x < maxrow; x++)
    {

        if (StdID[x] == search)
        {
            counter++;
            cout << "\t\t\t  " << counter << "       " << StdID[x];
            cout << "\t\t  " << StdName[x] << "\t " << Age[x] << "\t\t    " << StdGphone[x] << endl;
            break;
        }
    }

    if(counter == 0)
    {

        cout << "\t\t\t\t\t\tNo Student Record Found!" << endl;

    }
    cout << "\t\t\t---------------------------------------------------------------------------" << endl;

}
void Search_GTRecord(string search)
{
    system("cls");
    cout << "\t\t\t\t\t ------------------------------------" <<endl;
    cout << "\t\t\t\t\t|    CURRENT RECORDS IN THE SYSTEM   |" <<endl;
    cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
    int counter = 0;
    for(int x = 0; x < maxrow; x++)
    {

        if (GTStdID[x] == search)
        {
            counter++;
            cout << "\t\t\t  " << counter << "       " << GTStdID[x];
            cout << "\t\t  " << GTStdName[x] << "\t " << GTAge[x] << "\t\t    " << GTStdGphone[x] << endl;
            break;
        }
    }

    if(counter == 0)
    {

        cout << "\t\t\t\t\t\tNo Student Record Found!" << endl;

    }
    cout << "\t\t\t---------------------------------------------------------------------------" << endl;

}
void Edit_GOneRecord(string search) //works same as the the search function except after the value has been searched it compared
{                                   //and replace if values match
    char name[50];
    char Gphone[50];

    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(StdID[x] == search)
        {
            counter++;

            cout << "\t\t\t\t\tEnter New-Student Name: ";
            cin.getline(name, 50);
            StdName[x] = name;
            cout << "\t\t\t\t\tEnter New-Student Guardian Contact No: ";
            cin.getline(Gphone, 50);
            StdGphone[x] = Gphone;

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
void Edit_GTwoRecord(string search)
{
    char s_name[50];
    char s_Gphone[50];

    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(GTStdID[x] == search)
        {
            counter++;

            cout << "\t\t\t\t\tEnter New-Student Name: ";
            cin.getline(s_name, 50);
            GTStdName[x] = s_name;
            cout << "\t\t\t\t\tEnter New-Student Guardian Contact No: ";
            cin.getline(s_Gphone, 50);
            GTStdGphone[x] = s_Gphone;

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
void Delete_GOneRecord(string search)//works same as the the search function except after the value has been searched it is then compared
{                                   //and deleted if values ID match



    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(StdID[x] == search)
        {
            counter++;

            StdName[x] = "";
            StdID[x] = "";
            StdGphone[x] = "";

            cout << "\n\t\t\t\t\tRecord Deleted Successfully!" << endl;

        }

    }
    if (counter == 0)
    {
        cout << "\n\t\t\t\t\tOops! ID Number does not exist!\n" << endl;
    }
}
void Delete_GTwoRecord(string search)
{

    int counter = 0;

    for(int x = 0; x < maxrow; x++)
    {
        if(GTStdID[x] == search)
        {
            counter++;

            GTStdName[x] = "";
            GTStdID[x] = "";
            GTStdGphone[x] = "";

            cout << "\n\t\t\t\t\tRecord Deleted Successfully!" << endl;

        }

    }
    if (counter == 0)
    {
        cout << "\n\t\t\t\t\tOops! ID Number does not exist!\n" << endl;
    }
}
void SaveData_GOne() // the function writes data to the file (Gradones.txt) document using arrays
{
    ofstream myfile;
    myfile.open("GRADEONE.txt");

    for(int x = 0; x < maxrow; x++)
    {
        if(StdID[x] == "\0")
        {
            break;
        }
        else
        {
             myfile << StdID[x] << "\t\t" << StdName[x] << "\t" << Age[x] << "\t" << StdGphone[x] << endl;
        }
    }

	myfile.close();
}
void SaveData_GTwo() //similarly works like the previous function
{
    ofstream myfile;
    myfile.open("GRADETWO.txt");

    for(int x = 0; x < maxrow; x++)
    {
        if(StdID[x] == "\0")
        {
            break;
        }
        else
        {
             myfile << GTStdID[x] << "\t\t" << GTStdName[x] << "\t" << GTAge[x] << "\t" << GTStdGphone[x] << endl;
        }
    }
    myfile.close();

}

void HeadMenu()
{
    system("cls");

	int ans;
    openfile_GOne();
    openfile_GTwo();
	string StdID;
	string GTStdID;
	int choice;
	system ("cls");
	int option;

	  do
      {
            cout << "\t\t\t\t\t ------------------------------------" <<endl;
        	cout << "\t\t\t\t\t|ZIT PRIMARY SCHOOL MANAGEMENT SYSTEM|" <<endl;
        	cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
        	cout << "\n\t\t\t\t\t\t1. ADD NEW PUPIL" << endl;
        	cout << "\t\t\t\t\t\t2. DELETE PUPIL" << endl;
        	cout << "\t\t\t\t\t\t3. SEARCH FOR PUPIL" << endl;
        	cout << "\t\t\t\t\t\t4. EDIT PUPIL RECORD" << endl;
        	cout << "\t\t\t\t\t\t5. DISPLAY ALL PUPILS BY GRADE" << endl;
        	cout << "\t\t\t\t\t\t6. EXIT AND SAVE TO TEXTFILE\n" << endl;


  		do{
					cout <<"\n\t\t\t\t\tLOGIN AS: ";
	 				cin>>option;
					cout <<"\n\t\t\t\t\tProcessing............";
					Sleep(1000);
						if (option == HEAD)
						{
							system("cls");
	 						Head_Login();
						}
								else if (option == DEPUTY_HEAD)
								{
									system("cls");
	 								Head_Login();
								}
								else if (option==CLASSTEACHER)
								{
									system("cls");
									Teacher_Login();
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
    int option;
    char ans, Y, y;

	const int HEAD=1;
	const int DEPUTY=2;
	const int TEACHER=3;

            cout << "\t\t\t\t\t ------------------------------------" <<endl;
            cout << "\t\t\t\t\t|***WELCOME TO ZIT*****|" <<endl;
            cout << "\t\t\t\t\t|  PRIMARY SCHOOL MANAGEMENT SYSTEM  |" <<endl;
            cout << "\t\t\t\t\t ------------------------------------\n" <<endl;
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