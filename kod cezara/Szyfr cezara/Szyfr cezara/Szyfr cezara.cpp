#include<iostream>


using namespace std;


void szyfruj(int owoc, char mango[])
{
	int dl = strlen(mango);




	if (!(owoc >= -26 && owoc <= 26)) return;



	if (owoc >= 0)
		for (int i = 0; i < dl; i++)
			if (mango[i] + owoc <= 'z')
				mango[i] += owoc;
			else
				mango[i] = mango[i] + owoc - 26;
	else
		for (int i = 0; i < dl; i++)
			if (mango[i] + owoc >= 'a')
				mango[i] += owoc;
			else
				mango[i] = mango[i] + owoc + 26;
}
int main()
{
	char tabelka[1001];


	int klucz;


	cout << "Podaj text: ";
	cin >> tabelka;


	cout << "Podaj klucz [-26..26]: ";
	cin >> klucz;


	szyfruj(klucz, tabelka);


	cout << "Po zaszyfrowaniu: " << tabelka << endl;


	szyfruj(-klucz, tabelka);


	cout << "Po rozszyfrowaniu: " << tabelka << endl;


	return 0;
}