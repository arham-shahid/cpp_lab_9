#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);
    // Seed the random number generator.
    srand(seed);
    int num;
    int isEven = 0;
    int isOdd = 0;

    cout << "Pick a number between 1 and 10: ";
    cin >> num;
    
    if (num < 1 || num > 10)
    {
        cout << "Invalid input";
        return 0;
    }

    while (num > 1 && num < 10)
    {

        int computerNum = (1 + (rand() % 10));
        cout << "Random number selected by computer is: " << computerNum << endl;

        int sum = num + computerNum;

        if (sum % 2 == 0)
        {
            isEven++;
        }
        else
        {
            isOdd++;
        }
        cout << "Pick a number between 1 and 10: ";
        cin >> num;
    }

    cout << "Total wins of computer are: " << isEven << endl;
    cout << "Total wins of human player are: " << isOdd << endl;
}