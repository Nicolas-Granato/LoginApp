#ifndef AUTENTICATOR_H
#define AUTENTICATOR_H
#include <string>
using namespace std;

int login();
int registering();
bool isBlank(string passwordOrUsername);
bool isBelowThan8Char(string password);

#endif
