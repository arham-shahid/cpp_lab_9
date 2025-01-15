#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any integer: ";
    cin >> num;
    int maxNum = num;
    int minNum = num;
    if (num == 0)
    {
        cout << "Invalid input";
        return 0;
    }
    while (num != 0)
    {
        cout << "Enter any integer: ";
        cin >> num;

        if (num != 0)
        {
            if (maxNum <= num)
            {
                maxNum = num;
            }
            if (minNum >= num)
            {
                minNum = num;
            }
        }
    }

    cout << "Maximum number entered by user is " << maxNum << endl;
    cout << "Minimum number entered by user is " << minNum << endl;
    return 0;
}