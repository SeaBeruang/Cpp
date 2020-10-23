#include <iostream>
#include <string>

using namespace std;

//jadi class itu harus sebelum int main

class perkalian //nama kelas sama nama function harus sama
{
	int a;
	int b;	
		
	public: 

	
	void hasil (int,int);
		int total() 
		{
		return a*b;
		} //method 
		
}; //diujung class harus ada semi-cologne


void perkalian::hasil (int x, int y) //ini function
{
	a = x;
	b = y; 
}

int main()
{
	perkalian satu;
	satu.hasil (12,8);
	cout << "hasilnya itu segitu woi : " << satu.total();
	return 0;
}
