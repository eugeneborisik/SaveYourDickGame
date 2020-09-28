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

    //While cycle to run the game with basic console user interface
    while (WinCondition != 1)
    {
        //Implement randomizer
        int a = 1;
        int b = 2;
        int c = 3;

        //Guess variables
        int GuessA;
        int GuessB;
        int GuessC;

        int sum = a + b + c;
        int multiple = a*b*c;

        int finalSum;
        int finalMultiple;

        ActionSelected = Message.PrintInputPromt("Type number of action and press Enter: ");        

        switch (ActionSelected)
        {
        case 1:
            Message.PrintGameRules();
            Message.PrintMainMenu();
            break;        
        
        case 2:        
            Message.PrintClue(sum, multiple);
            Message.PrintMainMenu();
            break;
        
        case 3:
            Console.Print("###ENTER ANSWERS###");
            Console.Print("Enter number and press Enter and proceed with rest numbers.");
            Console.Print("Example:");
            Console.Print("");
            Console.Print("1");
            Console.Print("");
            Console.Print("1");
            Console.Print("");
            Console.Print("1");
            Console.Print("You can also enter all numbers and split them with space and then press Enter");
            Console.Print("Example: 1 1 1");
            Console.Print("YOUR ANSWER: ");

            GuessA = Message.PrintInputPromt("");
            GuessB = Message.PrintInputPromt("");
            GuessC = Message.PrintInputPromt("");

            finalSum = GuessA + GuessB + GuessC;
            finalMultiple = GuessA * GuessB * GuessC;

            if (finalSum == sum && finalMultiple == multiple)
            {
                WinCondition = 1;
                Message.PrintVictoryWessage();
            }
            else
            {
                WinCondition = 1;
                Message.PrintLooseMessage();
            }            

            break;
        
        case 4:
            WinCondition = 1;
            Message.PrintLooseMessage();            
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