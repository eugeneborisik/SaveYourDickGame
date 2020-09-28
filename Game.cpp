#include <iostream>
#include "./GameLogics/UserInterface.h"

int main()
{
    //Inheriting Messaging class from GameLogics.cpp file
    UserInterface Message;

    //GameLogics

    /*
    WinCondition variable can have 3 values:
    0 - you loose
    1 - you proceeding
    2 - you win 

    ActionSelected is just a variable to store a value to pick Main Menu items
     */
    int WinCondition = 1;
    int ActionSelected;

    while (WinCondition != 2 && WinCondition != 0)
    {
        ActionSelected = Message.PrintInputPromt();        

        switch (ActionSelected)
        {
        case 1:
            Message.PrintGameRules();
            break;
        
        //TODO: IMPLEMENT PRINTING CLUES
        case 2:        
            cout << "WARNING: NOT IMPLEMENTED YET!" << endl;
            Message.PrintMainMenu();
            break;

        //TODO: IMPLEMENT GETTING ANSWER
        case 3:
            cout << "WARNING: NOT IMPLEMENTED YET!" << endl;
            Message.PrintMainMenu();
            break;

        //TODO: IMPLEMENT GIVING UP
        case 4:
            cout << "WARNING: NOT IMPLEMENTED YET!" << endl;
            Message.PrintMainMenu();
            break;

        default:
            Message.ErrorMainMenu();
            Message.PrintMainMenu();
            break;
        }
    }

    return 0;
}