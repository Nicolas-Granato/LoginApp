#include <iostream>
#include <fstream>
#include <string>
#include "autenticator.h"
using namespace std;

int login(){
    string loginUsername, loginPassword, joinUsernamePassword, iteratingLine;

    cout << "Enter your usernamme: " << endl;
    getline(cin, loginUsername);
    while (isBlank(loginUsername) == true){
        getline(cin, loginUsername);
    }

    cout << "Enter your password: " << endl;
    getline(cin,loginPassword);
    while (isBlank(loginPassword) == true){
        getline(cin, loginPassword);
    }

    joinUsernamePassword = loginUsername + "," + loginPassword; 

    ifstream usersRecordsArchive("usersRecords.csv");
    if (!usersRecordsArchive.is_open()){
        cout << "Error: File not found..." << endl;
        return 1;
    }

    while(getline(usersRecordsArchive, iteratingLine)){
        if(joinUsernamePassword == iteratingLine){
            cout << "Loggin in..." << endl;
            usersRecordsArchive.close();
            return 0;
        }
    }
    cout << "Username and password combination not found..." << endl;
    return 1;
}
