#include <iostream>
#include <fstream>
#include <string>
#include "isStandardized.h"
using namespace std;

int main(){
    string recordUserName, recordUserPassword;

    cout << "Register your username: " << endl;
    getline(cin, recordUserName);
    while (isBlank(recordUserName) == true){
        getline(cin, recordUserName);
    }

    cout << "Register your password: " << endl;
    getline (cin, recordUserPassword);
    while (isBlank(recordUserPassword) == true){
        getline (cin, recordUserPassword);
    }
    while (isBelowThan8Char(recordUserPassword) == true){
        getline (cin, recordUserPassword);
    }

    ofstream outputArchive("usersRecords.csv", ios::app);
    if (!outputArchive.is_open()){
        cout << "Error: Could not open the file..." << endl;
        return 1;
    }

    outputArchive << recordUserName << "," << recordUserPassword << "\n";
    outputArchive.close();

    return 0;
}
