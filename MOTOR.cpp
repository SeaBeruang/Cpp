#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main ()
{
	int i;
	int pilih, jumlah;
	char option;
	const char kawasaki = 10;
	char motor1[kawasaki] = {'A','B','C','D','E','F','G','H','I','J'};
	
	cout << "Ini katalog : " << endl;
	cout << "1. Kawasaki" << endl;
	cout << "2. Yamaha" << endl;
	cout << "3. Scoopy" << endl;
	cout << "4. Ninja" << endl;
	cout << "5. Suprafit" << endl;
	
	cout << "\n\nmau yang mana ?" << endl;
	cin >> pilih;
	do
	{
		if(pilih == 1)
		{
			cout << "mau beli berapa ? (batas pembelian hari ini adalah 10)" << endl;
			cin >> jumlah;

			for (jumlah = 0; jumlah < kawasaki; jumlah++)
			{
				cout << "Motor kawasaki" << *(kawasaki + jumlah) << endl;
				cout << "mau pilih lagi? (Y/N)" << endl;
				cin >> option;
			}
			
		}
	}
	while (option == 'y' || option == 'Y');
   return 0;
}

