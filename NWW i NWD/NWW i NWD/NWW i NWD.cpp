#include <iostream>
using namespace std;
int main() {
	int a, b;
	int iloczyn;
	cout << "podaj pierwszą liczbę :";
	cin >> a;
	cout << "podaj drugą liczbę :";
	cin >> b;
	while(a != b)  {
		if (a < b) {
			b = b - a;
		}
		else{
			a = a - b;
		}
	}
	cout << " to jest NWD :";
	cout << a;

	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
	}

}

