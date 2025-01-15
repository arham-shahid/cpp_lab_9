#include <iostream>
using namespace std;

int main()
{
    int rooms = 0,
        occupiedRooms = 0,
        emptyRooms = 0;

    int floors;
    cout << "Enter number of Floors : ";
    cin >> floors;

    // Validate input
    if (floors < 1)
    {
        cout << "Invalid input. \n"
             << "Floors should be atleast 1";
        return 0;
    }

    int totalRooms = 0,
        totalOccupiedRooms = 0,
        totalEmptyRooms = 0;

    for (int i = 1; i <= floors; i++)
    {
        cout << "Enter the rooms on floor " << i << ": ";
        cin >> rooms;

        // Validate input
        if (rooms < 10)
        {
            cout << "Invalid input. \n"
                 << "Rooms should be atleast 10";
            return 0;
        }

        totalRooms += rooms;

        cout << "Enter how many rooms are occupied: ";
        cin >> occupiedRooms;

        totalOccupiedRooms += occupiedRooms;
    }
    totalEmptyRooms = (totalRooms - totalOccupiedRooms);
    cout << "The hotel has total of " << floors << " floors.\n"
         << "The hotel has total of " << totalRooms << " rooms.\n"
         << "There are " << totalOccupiedRooms << " rooms occupied.\n"
         << "There are " << totalEmptyRooms << " rooms empty.\n"
         << "Percentage of occupied rooms is " << (totalOccupiedRooms * 100) / totalRooms << "% \n"
         << "Percentage of empty rooms is " << (totalEmptyRooms * 100) / totalRooms << "% \n";

    return 0;
}