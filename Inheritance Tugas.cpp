#include <iostream>

using namespace std;

class Induk {
	public:
		void lebar(int l)
		{
			lebar = l;
		}
		void tinggi(int t)
		{
			tinggi = t;
		}
		void panjang(int p)
		{
			panjang = p;
		}
		
		protected:
			int lebar;
			int panjang;
			int tinggi;
};

class HargaPagar{
	public:
		int H_pagar(int pxl)
		{
			return 10 * 100.000; //jadi dihitung nya 100.000 per 10 pagar
		}
};

class HargaKolam{
	protected:
		int pjg = 25000;
		int lbr = 15000;
		int tgg = 25000;
};

//Child Class

class BuatKolam: public Induk, public VolumeKolam {
	public:
		int getKolam() {
			return ((panjang*pjg)+(lebar*lbr)+(tinggi*tgg));
		}
};

class BuatPagar: public Induk, public HargaPagar {
	public:
		int getPagar() {
			return (panjang * lebar)/pxl;
		}
};

int main(void)
{
	

	int kolam;
	int pagar;
	int pxl, l, p, t;
	
	kolam = Kolam.getKolam();
	pagar = Pager.getPagar();
	
	cout << "Input Panjang : " << endl;
	cin >> panjang;
	
	cout << "Input Lebar : " << endl;
	cin >> lebar;
	
	cout << "Input Tinggi : " << endl;
	cin >> tinggi;
	
	cout << "Buat Kolam harganya segini : " << Kolam.getKolam() << endl;
	cout << "Buat Pager harganya segini : " << Pager.getPagar() << endl;
	
	return 0;
	
}

