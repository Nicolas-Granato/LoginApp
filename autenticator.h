#include <iostream>
#include <string>
using namespace std;

bool isBlank(string passwordOrUsername){
    if (passwordOrUsername.empty()){
        cout << "ERROR: the camp above cannot be blank..." << endl;
        return true;
    }
    return false;
}

bool isBelowThan8Char(string password){
    if (password.length() < 8){
        cout << "ERROR: the password must be at least 8 characters long..." << endl;
        return true;
    }
    return false;
}
