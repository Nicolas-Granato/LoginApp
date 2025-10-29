#include <iostream>
#include "autenticator.h"
using namespace std;

int selectionFunction(int number){
    if (number == 1){
        login();
    }
    if (number == 2){
        registering();
    }
}

int main(){
    int selection;

    cout << "Select the function (1 = Login/2 = Register)" << endl;
    cin >> selection;
    selectionFunction(selection);

    return 0;
}