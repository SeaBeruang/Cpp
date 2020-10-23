#include <iostream>
#include <iomanip>//?
#include <stdlib.h>//string
#include <time.h>//

#include <iosfwd>
#include <exception> 		// For ios_base::failure
#include <bits/char_traits.h> 	// For char_traits, streamoff, streamsize, fpos
#include <bits/localefwd.h>	// For class locale
#include <bits/ios_base.h>	// For ios_base declarations.
#include <streambuf> 
#include <bits/basic_ios.h>
using namespace std;

int main()
{
	int id, discount,disc;
	int quantity, PBT, FinalPrice, Tax, PPU;
	const double TaxPercent = 10.0;
	char prod[50];
	system("color f2"); //ganti warna
		
	
	cout << "\n\n===================== GENIE MARKET ======================" ;
  	cout << "\n\n============ EVERYTHING YOU WANT IS HERE ================" << endl;
  	cout << "\n\n:: Please enter the name of product you want : \n:: ";
  	gets(prod);
  	
	cout << "\n:: Specify quantity of product unit : \n:: " ;
	cin >> quantity;
	
	srand(time(NULL));
	id = rand()%100;
	PPU = rand()&50;
	
	disc=discount;
	
	
	//PBT = PRICE BEFORE TAX
	//PPU = PRICE PER UNIT

	PBT = PPU * quantity;
	
	if (PBT > 40)
	{
		discount = PBT * 40 / 100;
	}
	else if (PBT > 70)
	{
		discount = PBT * 20 / 100;		
	}
	else if (PBT > 100)
	{
		discount = PBT * 15 / 100;		
	}
	else if (PBT < 25)
	{
		discount = 0;
	}

	
	cout << "\n:: The price for "<< prod << " is RP. " << PPU << "K \n:: ";
	cout << PPU << " x " << quantity << " = " << PBT <<"K";
	
	cout << "\n\n  ===============================";	
	cout << "\n:: You get a " << discount << "% Discount"; 
	cout << "\n  ===============================";	
	cout << "\n\n\n\n\n\n";
	
	system("PAUSE"); //press to continue
	
	Tax = PBT * TaxPercent / 100;
	FinalPrice = PBT + Tax;	

	system("CLS");  //ganti halaman
	unsigned int x, y, z;
	  
  	cout << ":: Enter year	: ";
  	cin >> z;
  	
  	if(z <1)
  	{
  		cout << "=====================================================" << endl;
  		cout << "	INVALID DATE. please restart the program" << endl;
		cout << "=====================================================" << endl;  		
	return 0;		
	}
  	system("CLS");
  	cout << ":: Enter month	: ";
  	cin >> y;
  	
  	if(y > 12 && y<1)
  	{
		cout << "=====================================================" << endl;
  		cout << "	INVALID DATE. please restart the program" << endl;
		cout << "=====================================================" << endl;  		
	return 0;		
  	}
  	system("CLS");
 	cout << ":: Enter date	: ";
  	cin >> x;  
  	  	  	
  	if(y > 32 && y<1)
  	
  	
  	
  	{
		cout << "=====================================================" << endl;
  		cout << "	INVALID DATE. please restart the program" << endl;
		cout << "=====================================================" << endl;  		
	return 0;		
  	}

   	system("CLS");		
   	string date[13]={"None", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   	
	cout << "Date : " << x << date[y] << z << endl;
		

   
   	
	cout << "\n  ===============================";	   
	cout << "\n|| INVOICE for 	: " << date[y] << " " << x << ", " << z;	
	cout << "\n||===============================" << endl;
	cout << "|| Product name 	: " << prod << endl;
	cout << "||===============================" << endl;	
	cout << "|| Item Code 		: " << id << endl;
	cout << "||===============================" << endl;	
	cout << "|| Quantity 		: " << quantity << endl;
	cout << "||===============================" << endl;	
	cout << "|| Price per unit 	: " << PPU <<"K"<< endl;
	cout << "||===============================" << endl;	
	cout << "|| Tax 			: " << Tax <<"K"<< endl;
	cout << "||===============================" << endl;	
	cout << "|| Discount		: " << discount <<"%"<< endl;
	cout << "||===============================" << endl;	
	cout << "|| Total Price 		: " << FinalPrice << endl;	
	cout << "  ================================" << endl;
	
}
