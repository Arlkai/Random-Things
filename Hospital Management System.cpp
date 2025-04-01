#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Have a set of options between the following:
//P - Patient Information
    //D - Display Patients
    //A - Add Patients
    //Q - Done

//B - Billing Information
//Q - Quit

void enterUsername () {
    string username {"AnthonyQ"};
    string userUsername {};

    do {
    cout << "Enter Username: ";
    cin >> userUsername;

    if (userUsername != username) {
        cout << "\nInvalid Username - Try Again" << endl;
    }

    } while (userUsername != username);

    cout << "Proceed" << endl;
}

void enterPassword () {
    string password {"JiuJitsu"};
    string userPassword {};

    do {
        cout << "Enter Password: ";
        cin >> userPassword;

        if (userPassword != password) {
            cout << "\nInvalid Password - Try Again" << endl;
        }
    } while (userPassword != password);
}

int main () {

    cout << "<-------------Hospital Management System------------->" << endl;

    enterUsername();
    enterPassword();

    vector<string> patientNames {};
    char userInput;

    do {
        
        char patientInput {};

        cout << "\nP - Patient Information" << endl << "B - Billing Information" << endl << "Q - Quit" << endl;
        cin >> userInput;

        if (userInput == 'P' || userInput == 'p') {

            do {
                cout << "\nD - Display Patients" << endl << "A - Add a Patient" << endl << "Q - Quit" << endl;
                cin >> patientInput;

                if (patientInput == 'D' || patientInput == 'd') {
                    //Displaying patient information
                }
                else if (patientInput == 'A' || patientInput == 'a') {
                    string patientName;
                    cout << "Enter the full name of the patient: ";
                    std::getline(cin, patientName);
                    patientNames.push_back(patientName);
                }
                    
            } while (patientInput != 'Q' && patientInput != 'q');
        }

    } while (userInput != 'Q' && userInput != 'q');

    cout << "\nGoodbye" << endl;

    return 0;
}