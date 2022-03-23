
#include <iostream>

using namespace std;



int main()
{
    int arbuz;
    int arab = 0;
    int pomidor = 0;
    int sweden = 2;
    cout << "Podaj ile chcesz wygenerować liczb: ";
    cin >> arbuz;
    while (arab < arbuz)
    {
        for (int d = 2; d <= sweden - 1; d++)
            if (sweden % d == 0) { pomidor++; }
        if (pomidor == 0) { cout << " " << sweden; arab++; }
        sweden++;
        pomidor = 0;
    }
}