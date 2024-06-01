#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Innovator {
    int id, age;
    string firstName, SurName, Title_of_innovation, date, category, nrc;
};

int counter = 0;

void addinnovator() {
    Innovator innovator;
    cout << "Enter your first name: ";
    cin.ignore();
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
    cout << "Enter your NRC/PASSPORT number: ";
    cin.ignore();
    getline(cin, innovator.nrc);

    counter++;

    ofstream file("new record.txt", ios::app);
    file << counter << endl;
    file << innovator.firstName << endl;
    file << innovator.SurName << endl;
    file << innovator.age << endl;
    file << innovator.nrc << endl;
    file << innovator.Title_of_innovation << endl;
    file << innovator.category << endl;
    file << innovator.date << endl;
    file.close();

    ofstream counterFile("id.txt");
    counterFile << counter;
    counterFile.close();
}

void display() {
    ifstream read("new record.txt");
    Innovator innovator;
    while (read >> innovator.id) {
        read.ignore();
        getline(read, innovator.firstName);
        read >> innovator.SurName >> innovator.age >> innovator.nrc;
        read.ignore();
        getline(read, innovator.Title_of_innovation);
        getline(read, innovator.category);
        getline(read, innovator.date);
        cout << "ID: " << innovator.id << endl;
        cout << "First Name: " << innovator.firstName << endl;
        cout << "Surname: " << innovator.SurName << endl;
        cout << "Age: " << innovator.age << endl;
        cout << "NRC/PASSPORT: " << innovator.nrc << endl;
        cout << "Title of Innovation: " << innovator.Title_of_innovation << endl;
        cout << "Category: " << innovator.category << endl;
        cout << "Date Submitted: " << innovator.date << endl;
        cout << "----------------------------------------" << endl;
    }
    read.close();
}

int search() {
    int age;
    cout << "Enter innovator's age: ";
    cin >> age;
    ifstream read("new record.txt");
    Innovator innovator;
    bool found = false;
    while (read >> innovator.id) {
        read.ignore();
        getline(read, innovator.firstName);
        read >> innovator.SurName >> innovator.age >> innovator.nrc;
        read.ignore();
        getline(read, innovator.Title_of_innovation);
        getline(read, innovator.category);
        getline(read, innovator.date);
        if (age == innovator.age) {
            cout << "Record found:" << endl;
            cout << "ID: " << innovator.id << endl;
            cout << "First Name: " << innovator.firstName << endl;
            cout << "Surname: " << innovator.SurName << endl;
            cout << "Age: " << innovator.age << endl;
            cout << "NRC/PASSPORT: " << innovator.nrc << endl;
            cout << "Title of Innovation: " << innovator.Title_of_innovation << endl;
            cout << "Category: " << innovator.category << endl;
            cout << "Date Submitted: " << innovator.date << endl;
            found = true;
        }
    }
    read.close();
    if (!found) {
        cout << "Record not found for age " << age << endl;
    }
    return age;
}

void deletedata() {
    int age = search();
    if (age == 0) {
        cout << "No record to delete." << endl;
        return;
    }

    cout << "Do you want to delete this record? (Press 1 for Yes): ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        ifstream read("new record.txt");
        ofstream tempfile("temp.txt");
        Innovator innovator;

        while (read >> innovator.id) {
            read.ignore();
            getline(read, innovator.firstName);
            read >> innovator.SurName >> innovator.age >> innovator.nrc;
            read.ignore();
            getline(read, innovator.Title_of_innovation);
            getline(read, innovator.category);
            getline(read, innovator.date);

            if (age != innovator.age) {
                tempfile << innovator.id << endl;
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
        cout << "Data deleted." << endl;
    }
    else {
        cout << "Record not deleted." << endl;
    }
}

void updaterecord() {
    int age = search();
    if (age == 0) {
        cout << "No record to update." << endl;
        return;
    }

    cout << "Do you want to update this record? (Press 1 for Yes): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        Innovator newinnovator;
        cout << "Enter new details:" << endl;
        cout << "Enter your first name: ";
        cin.ignore();
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

        ifstream read("new record.txt");
        ofstream tempfile("temp.txt");
        Innovator innovator;

        while (read >> innovator.id) {
            read.ignore();
            getline(read, innovator.firstName);
            read >> innovator.SurName >> innovator.age >> innovator.nrc;
            read.ignore();
            getline(read, innovator.Title_of_innovation);
            getline(read, innovator.category);
            getline(read, innovator.date);

            if (age != innovator.age) {
                tempfile << innovator.id << endl;
                tempfile