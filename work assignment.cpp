#include <iostream>
#include <string>
using namespace std;

// Structure to store innovator information
struct Innovator {
    string nrcPassportNo;
    string firstName;
    string surname;
    int age;
    string titleOfInnovation;
    string dateSubmitted;
    string patentStatus;
    string innovationCategory;
};

// Function to add a new innovator record
void AddInnovator(Innovator innovators[], int& count) {
    if (count < 100) {
        Innovator newInnovator;
        cout << "Enter NRC No / Passport No: ";
        cin >> newInnovator.nrcPassportNo;
        cout << "Enter First name: ";
        cin >> newInnovator.firstName;
        cout << "Enter Surname: ";
        cin >> newInnovator.surname;
        cout << "Enter Age: ";
        cin >> newInnovator.age;
        cout << "Enter Title of Innovation: ";
        cin.ignore();
        getline(cin, newInnovator.titleOfInnovation);
        cout << "Enter Date Submitted: ";
        cin >> newInnovator.dateSubmitted;
        cout << "Enter Patent Status (patented/in progress/not required): ";
        cin >> newInnovator.patentStatus;
        cout << "Enter Innovation Category: ";
        cin >> newInnovator.innovationCategory;

        innovators[count++] = newInnovator;
        cout << "Innovator added successfully!" << endl;
    } else {
        cout << "Maximum number of innovators reached." << endl;
    }
}

// Function to edit an existing innovator record
void EditInnovator(Innovator innovators[], int count) {
    string searchNrcPassportNo;
    cout << "Enter NRC No / Passport No of the innovator to edit: ";
    cin >> searchNrcPassportNo;

    for (int i = 0; i < count; i++) {
        if (innovators[i].nrcPassportNo == searchNrcPassportNo) {
            cout << "Enter updated information for the innovator:" << endl;
            cout << "Enter First name: ";
            cin >> innovators[i].firstName;
            cout << "Enter Surname: ";
            cin >> innovators[i].surname;
            cout << "Enter Age: ";
            cin >> innovators[i].age;
            cout << "Enter Title of Innovation: ";
            cin.ignore();
            getline(cin, innovators[i].titleOfInnovation);
            cout << "Enter Date Submitted: ";
            cin >> innovators[i].dateSubmitted;
            cout << "Enter Patent Status (patented/in progress/not required): ";
            cin >> innovators[i].patentStatus;
            cout << "Enter Innovation Category: ";
            cin >> innovators[i].innovationCategory;
            cout << "Innovator information updated successfully!" << endl;
            return;
        }
    }
    cout << "Innovator not found." << endl;
}

// Function to delete an existing innovator record
void DeleteInnovator(Innovator innovators[], int& count) {
    string searchNrcPassportNo;
    cout << "Enter NRC No / Passport No of the innovator to delete: ";
    cin >> searchNrcPassportNo;

    for (int i = 0; i < count; i++) {
        if (innovators[i].nrcPassportNo == searchNrcPassportNo) {
            for (int j = i; j < count - 1; j++) {
                innovators[j] = innovators[j + 1];
            }
            count--;
            cout << "Innovator deleted successfully!" << endl;
            return;
        }
    }
    cout << "Innovator not found." << endl;
}

// Function to view innovator records
void ViewInnovators(Innovator innovators[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Innovator " << i + 1 << ":" << endl;
        cout << "NRC No / Passport No: " << innovators[i].nrcPassportNo << endl;
        cout << "First name: " << innovators[i].firstName << endl;
        cout << "Surname: " << innovators[i].surname << endl;
        cout << "Age: " << innovators[i].age << endl;
        cout << "Title of Innovation: " << innovators[i].titleOfInnovation << endl;
        cout << "Date Submitted: " << innovators[i].dateSubmitted << endl;
        cout << "Patent Status: " << innovators[i].patentStatus << endl;
        cout << "Innovation Category: " << innovators[i].innovationCategory << endl;
        cout << "-----------------------------------------" << endl;
    }
}

int main() {
    Innovator innovators[100];
    int count = 0;

    while (true) {
        int choice;
        cout << "Z-Hub Innovation Record System" << endl;
        cout << "1. Add Innovator" << endl;
        cout << "2. Edit Innovator" << endl;
        cout << "3. Delete Innovator" << endl;
        cout << "4. View Innovators" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AddInnovator(innovators, count);
                break;
            case 2:
                EditInnovator(innovators, count);
                break;
            case 3:
                DeleteInnovator(innovators, count);
                break;
            case 4:
                ViewInnovators(innovators, count);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
