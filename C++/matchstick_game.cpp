#include <iostream>
using namespace std;

int main()
{
    int totalMatchsticks = 21;
    int playerPick, computerPick;

    cout << "Welcome to the Matchstick Game!" << endl;
    cout << "Rules: There are 21 matchsticks. You can pick 1, 2, 3, or 4 matchsticks." << endl;

    while (totalMatchsticks > 1)
    {
        // Player's turn
        cout << "Remaining matchsticks: " << totalMatchsticks << endl;
        do
        {
            cout << "Your turn: ";
            cin >> playerPick;
            if (playerPick < 1 || playerPick > 4 || playerPick > totalMatchsticks)
            {
                cout << "Invalid input. You can pick 1, 2, 3, or 4 matchsticks." << endl;
            }
        } while (playerPick < 1 || playerPick > 4 || playerPick > totalMatchsticks);

        totalMatchsticks -= playerPick;

        if (totalMatchsticks == 1)
        {
            cout << "You are forced to pick the last matchstick. You lose!" << endl;
            break;
        }

        // Computer's turn
        computerPick = 5 - playerPick; // ensures that computer always wins
        cout << "Computer picks: " << computerPick << " matchsticks." << endl;
        totalMatchsticks -= computerPick;
    }

    cout << "Game over! You Loose" << endl;

    return 0;
}
