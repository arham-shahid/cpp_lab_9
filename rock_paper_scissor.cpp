#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char rock = 'r';
    char scissor = 's';
    char paper = 'p';

    char userChoice;
    char computerChoice;

    for (int game = 0; game < 3; game++)
    {

        srand(time(0));
        int randomNumber = (1 + rand() % 3);

        cout << "Rock,Paper and Scissors Game \n"
             << "Choose one of the following options \n\n"
             << "(r) for Rock \n"
             << "(s) for scissor \n"
             << "(p) for paper \n\n"
             << "Enter your choice: ";
        cin >> userChoice;

        if (randomNumber == 1)
        {
            cout << "Computer's choice is rock.\n";
            computerChoice = rock;
        }
        else if (randomNumber == 2)
        {
            cout << "Computer's choice is scissor.\n";
            computerChoice = scissor;
        }
        else
        {
            cout << "Computer's choice is paper.\n";
            computerChoice = paper;
        }

        // Tie case scenario
        if (computerChoice == userChoice)
        {
            cout << "Tie. Play again win the game \n\n";
        }

        // Loose case scenario
        else if (computerChoice == rock && userChoice == scissor)
        {
            cout << "You loose. \n\n ";
        }
        else if (computerChoice == scissor && userChoice == paper)
        {
            cout << "You loose.\n\n ";
        }
        else if (computerChoice == paper && userChoice == rock)
        {
            cout << "You loose.\n\n ";
        }

        // Win case scenario
        else if (computerChoice == scissor && userChoice == rock)
        {
            cout << "You win.\n\n ";
        }
        else if (computerChoice == paper && userChoice == scissor)
        {
            cout << "You win.\n\n ";
        }
        else if (computerChoice == rock && userChoice == paper)
        {
            cout << "You win. \n\n";
        }
    }
}