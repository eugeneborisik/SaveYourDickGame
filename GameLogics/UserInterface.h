#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
using namespace std;

class UserInterface
{
    //Constructor
public:
    UserInterface()
    {
        WelcomeMessage();
    }

    //Prints some nice welcome message on game start ;)
private:
    void WelcomeMessage()
    {
        cout << "Hello, motherfucker!" << endl
             << "Yeah, yeah, you have been captured, and no surprise - this \"nice\" thing on your \"friend\" is not a joke." << endl
             << "Be sure, it will cut your fuckin' dick ... unless you play the game and win it" << endl
             << "Rights of the game are pretty simple:" << endl;
        GameRules();
        cout << "Hope you get the rules, good luck :)" << endl;
        PrintMainMenu();
    }

    void GameRules()
    {
        cout << "   1. You have to guess 3 numbers in order to unlock a device on your little \"friend\"" << endl
             << "   2. As a clue you will have 2 numbers: " << endl
             << "      - 1st number is a result of SUM of all 3 numbers to guess" << endl
             << "      - 2nd number is a result of MULTIPLICATION of all 3 numbers to guess" << endl
             << "   3. Once you found out the answer follow the instructions to enter these numbers one by one ... and pray you are right :)" << endl;
    }

public:
    void PrintGameRules()
    {
        cout << "###GAME RULES###" << endl;
        GameRules();
    }

    void PrintMainMenu()
    {
        cout << "###ACTIONS###" << endl
             << "   1. Print rules" << endl
             << "   2. Print clues" << endl
             << "   3. Give answer" << endl
             << "   4. Give up" << endl;
    }

    int PrintInputPromt()
    {
        int ActionSelected;
 
        cout << "Type number of action and press Enter: ";
        cin >> ActionSelected;

        return ActionSelected;
    }

    void ErrorMainMenu()
    {
        cout << "ERROR: UNKNOWN ACTION SELECTED!" << endl;
    }
};

#endif