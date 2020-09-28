#include "./Support/ConsoleHelper.h"
#include "./GameLogics/UserInterface.h"

int main()
{
    //Inheriting Messaging class from GameLogics.cpp file
    UserInterface Message;
    ConsoleHelper Console;

    //GameLogics

    /*
    WinCondition variable can have 2 values:
    0 - for running game
    1 - for finishing game

    ActionSelected is just a variable to store a value to pick Main Menu items
     */
    int WinCondition = 0;
    int ActionSelected;

    while (WinCondition != 1)
    {
        ActionSelected = Message.PrintInputPromt();        

        switch (ActionSelected)
        {
        case 1:
            Message.PrintGameRules();
            break;
        
        //TODO: IMPLEMENT PRINTING CLUES
        case 2:        
            Console.Print("WARNING: NOT IMPLEMENTED YET!");
            Message.PrintMainMenu();
            break;

        //TODO: IMPLEMENT GETTING ANSWER
        case 3:
            Console.Print("WARNING: NOT IMPLEMENTED YET!");
            Message.PrintMainMenu();
            break;

        //TODO: IMPLEMENT GIVING UP
        case 4:
            WinCondition = 1;
            Message.PrintGiveUpMessage();            
            break;

        default:
            Message.ErrorMainMenu();
            Message.PrintMainMenu();
            break;
        }
    }

    Console.PressAnyKey();
    return 0;
}