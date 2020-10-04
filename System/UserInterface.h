#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>
#include "../Support/ConsoleHelper.h"
using namespace std;

class UserInterface
{
    //Constructor
public:
    UserInterface()
    {
        WelcomeMessage();
    }

    ConsoleHelper Console;

    //Prints some nice welcome message on game start ;)
private:
    void printMessage(string message)
    {
        cout << message << endl;
    }
    void WelcomeMessage()
    {
        Console.Print("Hello, motherfucker!");
        Console.Print("Yeah, yeah, you have been captured, and no surprise - this \"nice\" thing on your \"friend\" is not a joke.");
        Console.Print("Be sure, it will cut your fuckin' dick ... unless you play the game and win it");
        Console.Print("Rules of the game are pretty simple:");
        GameRules();
        Console.Print("Hope you get the rules, good luck :)");
    }

    void GameRules()
    {
        Console.Print("1. You have to guess 3 numbers in order to unlock a device on your little \"friend\"");
        Console.Print("2. As a clue you will have 2 numbers: ");
        Console.Print("   - 1st number is a result of SUM of all 3 numbers to guess");
        Console.Print("   - 2nd number is a result of MULTIPLICATION of all 3 numbers to guess");
        Console.Print("3. Once you found out the answer follow the instructions to enter these numbers one by one ... and pray you are right :)");
        Console.Print("4. You have to pass 5 levels");
    }

public:
    void PrintGameRules()
    {
        Console.Print("###GAME RULES###");
        GameRules();
    }

    void PrintMainMenu()
    {
        Console.Print("###ACTIONS###");
        Console.Print("1. Print rules");
        Console.Print("2. Print clues");
        Console.Print("3. Give answer");
        Console.Print("4. Give up");
    }

    void PrintLevel(int level)
    {
        Console.Print("You are on level " + to_string(level));
    }

    void PrintClue(int sum, int multiple)
    {
        Console.Print("###CLUE###");
        Console.Print("SUM of numbers is " + to_string(sum));
        Console.Print("MULTIPLICATION of numbers is " + to_string(multiple));
    }    

    int PrintInputPromt(string message)
    {
        string Input = Console.GetInput(message);
        int ConvertedInput = atoi(Input.c_str());
        return ConvertedInput;
    }

    void ErrorMainMenu()
    {
        Console.Print("ERROR: UNKNOWN ACTION SELECTED!");
    }

    void PrintVictoryWessage()
    {
        Console.Print("CONGRATULATIONS! YOU DESERVE TO LEAVE YOUR LITTLE FRIEND WITH YOU! :)");
    }

    void PrintLooseMessage()
    {
        Console.Print("FUCKIN' WEAKLING! YOU DO NOT DESERVE TO HAVE YOU COCK!");
    }
};

#endif