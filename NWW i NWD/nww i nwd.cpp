#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a, b, iloczyn;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;

	iloczyn = a * b;

	while (a != b)
	{
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	cout << "Najmniejsza wspolna wielokrotnosc: " << iloczyn / a << endl;
	system("PAUSE >nul");
	return 0;
}
