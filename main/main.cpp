#include <iostream>
#include <limits>
#include "autenticator.h"
using namespace std;

int selectingFunction(int number){
    if (number == 1){
        login();
        return 0;
    }
    else if (number == 2){
        registering();
        return 2;
    }
    else if (number == 0){
        cout << "Leaving the program..." << endl;
        return 0;
    }
    cout << "Function not defined" << endl;
    return 1;
}

int main(){
    int selection;
    
    cout << "Select the function (0 = Exit/1 = Login/2 = Register)" << endl;
    cin >> selection;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); /*basically what we call a "gambiarra"*/
    
    while (selectingFunction(selection) != 0){
        cout << "Select the function (0 = Exit/1 = Login/2 = Register)" << endl;
        cin >> selection;
    }

    return 0;
}
