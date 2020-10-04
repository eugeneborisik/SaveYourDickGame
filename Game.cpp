#include "./Support/ConsoleHelper.h"
#include "./System/UserInterface.h"
#include "./System/GameLogics.h"

int main()
{
    //Inheriting System ans Support stuff
    GameLogics Game;
    UserInterface Message;
    ConsoleHelper Console;
    
    /*
    WinCondition variable can have 2 values:
    0 - for running game
    1 - for finishing game

    LevelOfDifficulty is a level counter and difficulty increaser
    ActionSelected is just a variable to store a value to pick Main Menu items
     */
    int WinCondition = 0;
    int LevelOfDifficulty = 1;
    int ActionSelected;

    //Create first values to guess
    Game.Randomize(LevelOfDifficulty);
    
    //While cycle to run the game with basic console user interface
    while (WinCondition != 1 && LevelOfDifficulty != 6)
    {
        Message.PrintLevel(LevelOfDifficulty);
        Message.PrintMainMenu();
        ActionSelected = Message.PrintInputPromt("Type number of action and press Enter: ");

        switch (ActionSelected)
        {
        case 1:
            Message.PrintGameRules();
            break;

        case 2:
            Message.PrintClue(Game.GetSum(), Game.GetMultiple());
            break;

        case 3:
            Console.Print("###ENTER ANSWERS###");

            if (Game.TestMotherfucker(Game.GetSum(), Game.GetMultiple()))
            {
                ++LevelOfDifficulty;
                Game.Randomize(LevelOfDifficulty);
            }
            else
            {
                ++WinCondition;
            }

            break;

        case 4:
            ++WinCondition;
            break;

        default:
            Message.ErrorMainMenu();
            break;
        }
    }

    if (LevelOfDifficulty == 6)
    {
        Message.PrintVictoryWessage();
    }
    else
    {
        Message.PrintLooseMessage();
    }

    Console.PressAnyKey();
    return 0;
}