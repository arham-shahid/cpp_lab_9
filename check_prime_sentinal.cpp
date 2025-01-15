#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    while (num >= 0)
    {
        cout << "Enter a integer to check if it is prime or not:";
        cin >> num;

        bool result = true;

        if (num == 1)
        {
            result = false;
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                    result = false;
            }
        }
        if (result)
            cout << "It is a prime number. \n";
        else
            cout << "It is not a prime number \n";
    }
    return 0;
}
