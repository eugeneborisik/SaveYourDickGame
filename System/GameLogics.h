#ifndef GAMELOGICS_H
#define GAMELOGICS_H

#include <string>
#include "./System/UserInterface.h"
using namespace std;

class GameLogics
{
    UserInterface Message;

    private:
    int a = 0;
    int b = 0;
    int c = 0;        

    public:
    void Randomize(int LevelOfDifficulty)
    {
        a = rand() % (LevelOfDifficulty + 3) + 1;
        b = rand() % (LevelOfDifficulty + 3) + 1;
        c = rand() % (LevelOfDifficulty + 3) + 1; 
    }

    int GetSum()
    {
        return (a + b + c);
    }

    int GetMultiple()
    {
        return (a * b * c);
    }

    bool TestMotherfucker(int sum, int multiple)
    {
        int GuessA = Message.PrintInputPromt("First digit: ");
        int GuessB = Message.PrintInputPromt("Second digit: ");
        int GuessC = Message.PrintInputPromt("Third digit: ");

        int finalSum = GuessA + GuessB + GuessC;
        int finalMultiple = GuessA * GuessB * GuessC;

        if (finalSum == sum && finalMultiple == multiple)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
};    

#endif