#include <iostream>
#include <conio.h>

using namespace std;

class Korobki
{
public:
	
	int weidht, leinght, height;

	void Vvod()
	{
		cout << "Shirina=";
		cin >> weidht;
		cout << "Dlina=";
		cin >> leinght;
		cout << "Visota=";
		cin >> height;
	}
};


int main()
{
	Korobki korobka1;
	Korobki	korobka2;
	korobka1.Vvod();
	cout << "Korobka 2\n";
	korobka2.Vvod();
	if (korobka1.weidht>korobka2.weidht&&korobka1.height > korobka2.height&&korobka1.leinght>korobka2.leinght)
		cout << "Vhodit";
	else
		cout << "Nevhodit";
	_getch();
	return 0;
}