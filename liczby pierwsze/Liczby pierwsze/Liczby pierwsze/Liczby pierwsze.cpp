#include <iostream>
using namespace std;

int main()

{
    int czas;
    int arbuz = 0;
    int arab = 0;
    int polska = 2;

    cout << "Podaj ile chcesz wygenerować liczb: ";
    cin >> czas;

    while (arbuz < czas)

    {
        for (int d = 2; d <= polska - 1; d++)
            if (polska % d == 0) { arab++; }
        if (arab == 0) { cout << " " << polska; arbuz++; }

        polska++;
        arab = 0;

    }

}
