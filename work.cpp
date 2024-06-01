#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int counter=0;

struct Innovator {
    int id, age;
    string firstName, SurName, Title_of_innovation, date, category, nrc;
};

void addinnovator() {
    Innovator innovator;
  
    
    ofstream file;
    file.open("new record.txt", ios::app);
    cout << "Enter your first name: ";
    getline(cin, innovator.firstName);
    cout << "Enter your surname: ";
    getline(cin, innovator.SurName);
    cout << "Enter the title of innovation: ";
    getline(cin, innovator.Title_of_innovation);
    cout << "Enter the date submitted: ";
    getline(cin, innovator.date);
    cout << "Enter the category of your innovation: ";
    getline(cin, innovator.category);
    cout << "Enter your age: ";
    cin >> innovator.age;
    cin.ignore();
    cout << "Enter your NRC/PASSPORT number: ";
    getline(cin, innovator.nrc);
    counter++;
    
	file << counter<<endl;
    file << innovator.firstName<< endl;
    file << innovator.SurName << endl;
    file << innovator.age << endl;
    file << innovator.nrc << endl;
    file << innovator.Title_of_innovation << endl;
    file << innovator.category << endl;
    file << innovator.date << endl;
    file.close();
    file.open("id.txt");
    file << counter;
    file.close();
    cout << "The record has been saved successfully." << endl;


}

void print(Innovator s) {
	
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "INNOVATOR NO             : "<<counter<<endl;
    cout << "FIRST NAME               : " << s.firstName << endl;
    cout << "SURNAME                  : " << s.SurName << endl;
    cout << "AGE                      : " << s.age << endl;
    cout << "NRC/PASSPORT             : " << s.nrc << endl;
    cout << "TITLE OF THE PROJECT     : " << s.Title_of_innovation << endl;
    cout << "CATEGORY                 : " << s.category<< endl;
    cout << "DATE                     : " << s.date << endl;
    cout << "---------------------------------------------------------------------------------------\n";
    cout << endl;

}

void display() {
    Innovator innovator;
    ifstream read;
    read.open("new record.txt");
    
    while(!read.eof()) {
    	read>>counter;
    	read.ignore();
        getline(read, innovator.firstName);
        read >> innovator.SurName;
        read >> innovator.age;
        read.ignore();
        read >> innovator.nrc;
        read >> innovator.Title_of_innovation;
        read >> innovator.category;
        read >> innovator.date;
        read.ignore();
     
        if(read.eof()){
        break;	
		}
          print(innovator);
        }
     
    read.close();
}

int search() {
    int innvNo;
    cout << "Enter innovator's number : ";
    cin >> innvNo;

    Innovator innovator;
    ifstream read;
    read.open("new record.txt");
     while(!read.eof()) {
     	read>>counter;
     	read.ignore();
        getline(read, innovator.firstName);
        read >> innovator.SurName;
        read >> innovator.age;
        read.ignore();
        read >> innovator.nrc;
        read >> innovator.Title_of_innovation;
        read >> innovator.category;
        read >> innovator.date;
        read.ignore();
    

        if (innvNo == counter) {
            
             print(innovator);
         break;
        }
    }
    read.close();
    return 0;
}

void deletedata() {
    Innovator innovator;
     int innvNo;
    cout << "Enter innovator's number : ";
    cin >> innvNo;

   
    ifstream read;
    read.open("new record.txt");
     while(!read.eof()) {
     	read>>counter;
     	read.ignore();
        getline(read, innovator.firstName);
        read >> innovator.SurName;
        read >> innovator.age;
        read.ignore();
        read >> innovator.nrc;
        read >> innovator.Title_of_innovation;
        read >> innovator.category;
        read >> innovator.date;
        read.ignore();
    

        if (innvNo == counter) {
            cout << "Do you want to delete this record? (Press 1 to confirm): ";
    int choice;
    cin >> choice;
   cin.ignore();
    if (choice == 1) {
        ofstream tempfile;
        tempfile.open("temp.txt");
        
            	
            	tempfile << counter << endl;
                tempfile << innovator.firstName << endl;
                tempfile << innovator.SurName << endl;
                tempfile << innovator.age << endl;
                tempfile << innovator.nrc << endl;
                tempfile << innovator.Title_of_innovation << endl;
                tempfile << innovator.category << endl;
                tempfile << innovator.date << endl;
        
			   read.close();
        tempfile.close();
        
        
	
	
		} 
	}

	
    }
     remove("new record.txt");
        rename("temp.txt", "new record.txt");
        cout << "Data deleted successfuly." << endl;  
        
    }
  

   
	

void updaterecord() {
    Innovator innovator;
    int age = search();
    cout << "Do you want to update this record? (Press 1 to confirm): ";
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
        tempfile.open("temp.txt");
        ifstream read;
        read.open("new record.txt");

        while (!read.eof()) {
            read >> innovator.age;
            read.ignore();
            getline(read, innovator.firstName);
            read >> innovator.SurName;
            read >> innovator.nrc;
            read >> innovator.Title_of_innovation;
            read >> innovator.category;
            read >> innovator.date;

            if (innovator.age != age) {
                tempfile << newinnovator.firstName << endl;
                tempfile << newinnovator.SurName << endl;
                tempfile << newinnovator.age << endl;
                tempfile << newinnovator.nrc << endl;
                tempfile << newinnovator.Title_of_innovation << endl;
                tempfile << newinnovator.category << endl;
                tempfile << newinnovator.date << endl;
            } else {
                tempfile << innovator.firstName << endl;
                tempfile << innovator.SurName << endl;
                tempfile << innovator.age << endl;
                tempfile << innovator.nrc << endl;
                tempfile << innovator.Title_of_innovation << endl;
                tempfile << innovator.category << endl;
                tempfile << innovator.date << endl;
            }
        }

        read.close();
        tempfile.close();
        remove("new record.txt");
        rename("temp.txt", "new record.txt");
        cout << "Data updated successfully." << endl;
    } else {
        cout << "Record not updated." << endl;
    }
}

int main() {
    int option;
    ofstream file;
    file.open("new record.txt", ios::app);
    ifstream read;
    read.open("id.txt");
    if (!read.fail()) {
        read >> counter;
    } 
	else {
        counter = 0;
    }
    read.close();

    while (true) {
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
            
                cin.ignore();
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
                return 0;
        }
    }
}