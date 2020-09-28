#ifndef CONSOLEHELPER_H
#define CONSOLEHELPER_H

#include <iostream>
#include <conio.h>
using namespace std;

class ConsoleHelper 
{
    public:
    void Print(string message)
    {
        cout << message << endl;
    }

    string GetInput(string message)
    {
        string input;
        Print(message);
        cin >> input;
        return input;
    }

    void PressAnyKey()
    {
        Print("Press any key to continue ...");
        getch();
    }
};

#endif