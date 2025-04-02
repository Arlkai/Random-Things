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

void enterCredentials () {
    string username {"AnthonyQ"};
    string userUsername {};

    do {
    cout << "Enter Username: ";
    cin >> userUsername;

    if (userUsername != username) {
        cout << "\nInvalid Username - Try Again" << endl;
    }

    } while (userUsername != username);

    string password {"JiuJitsu"};
    string userPassword {};

    do {
        cout << "Enter Password: ";
        cin >> userPassword;

        if (userPassword != password) {
            cout << "\nInvalid Password - Try Again" << endl;
        }
    } while (userPassword != password);
    cout << "\nAccess Granted" << endl;
}


int main () {

    cout << "<-------------Hospital Management System------------->" << endl;

    enterCredentials();

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
                    if (!patientNames.empty()) {
                        cout << "Patient Names: " << endl;
                        int counter {1};
                        for (int i {0}; i < patientNames.size(); ++i) {
                            cout << "Patient " << counter << ": " << patientNames.at(i) << endl;
                            counter++;
                        }
                    }
                    else 
                        cout << "\nSorry, no data - Add Patients" << endl;
                }
                else if (patientInput == 'A' || patientInput == 'a') {
                    string patientName;
                    cout << "Enter the full name of the patient: ";
                    cin.ignore();
                    getline(cin, patientName);
                    patientNames.push_back(patientName);
                }
                    
            } while (patientInput != 'Q' || patientInput != 'q');
        }

        if (userInput == 'B' || userInput == 'b') {
            //I - Invoices
            char billingInput {};
            
        }

    } while (userInput != 'Q' && userInput != 'q');

    cout << "\nGoodbye" << endl;

    return 0;
}