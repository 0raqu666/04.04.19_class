#include <iostream>
#include <conio.h>

using namespace std;

class Korobki
{
private:
		int weidht, leinght, height;
public:
	/*Korobki(int cm_weidht, int cm_leinght, int cm_height)
	{
		setVvod(cm_weidht, cm_leinght, cm_height);
	}*/

	void Vvod()
	{
		cout << "Shirina=";
		cin >> weidht;
		cout << "Dlina=";
		cin >> leinght;
		cout << "Visota=";
		cin >> height;
	}
	void setVvod(int cm_weidht, int cm_leinght, int cm_height)
	{
		weidht = cm_weidht;
		leinght = cm_leinght;
		height = cm_height;
	}
};


int main()
{
	int weidht, leinght, height;
	int x, y, z,x1,y1,z1;
	Korobki korobka1;
	Korobki	korobka2;

	cout << "Shirina=";
	cin >> weidht;
	cout << "Dlina=";
	cin >> leinght;
	cout << "Visota=";
	cin >> height;

	korobka1.setVvod(weidht, leinght, height);

	x = weidht, y = leinght, z = height;

	cout << "Korobka 2\n";

	cout << "Shirina=";
	cin >> weidht;
	cout << "Dlina=";
	cin >> leinght;
	cout << "Visota=";
	cin >> height;

	korobka2.setVvod(weidht, leinght, height);

	x1 = weidht, y1 = leinght, z1 = height;

	if (x > x1&&y > y1&&z > z1)
		cout << "Vhodit";
	else
		cout << "Nevhodit";


	_getch();
	return 0;
}