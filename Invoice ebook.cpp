#include<iostream>
#include<iomanip>
#include <conio.h>
#include <stdlib.h>
#include<ctime>
using namespace std;

int main()
{
	int iNo, id;
	double dUnitPr, dPriceExTax, dCustPrice, dTax;
	const double dTaxPerc = 25.0;
	char prod[50];
	char date[100];
	system("color f6");
	
	
	cout << "\n\n===================== GENIE MARKET ======================" << endl;
  	cout << "\n\n============ EVERYTHING YOU WANT IS HERE ================" << endl;
  	cout << "\n\n================ GRAB YOURS FOR ONLY 5K =================" << endl;
  	cout << "\n\n Please enter the name of product you want : " << endl;
  	gets(prod);
  	
	cout << "Specify quantity of product unit" ;
	cin >> iNo;
	
	id=rand()%100;
	dUnitPr=rand()&100000;
	
	dPriceExTax = dUnitPr * iNo;
	
	dTax = dPriceExTax * dTaxPerc / 100;
	dCustPrice = dPriceExTax + dTax;
	
	unsigned int x, y, z;
  
  cout << "Enter year: ";
  cin >> z;
  cout << "Enter month: ";
  cin >> y;
  cout << "Enter date: ";
  cin >> x;

  if(x<=0 || y<=0 || z<=0){
    cout << "Invalid date!";
    system("PAUSE");
  }
  else if(z%4==0){
    if(y==2){
      if(x>29){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
  }
  else{
    if(y==2){
      if(x>28){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
  }
  if(y>12){
    cout << "Invalid date!";
    system("PAUSE");
  }
  else if(y<=7){
    if(y%2==1){
      if(x>31){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
    else{
      if(x>30){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
  }
  if(y>=8){
    if(y%2==0){
      if(x>31){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
    else{
      if(x>30){
        cout << "Invalid date!";
        system("PAUSE");
      }
    }
  }
  
   
   string month2[13]={"None", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   cout << "Invoice for " << date[y] << " " << x << ", " << z << endl;
	
	cout << endl << "Invoice for" << [y] << endl;
	cout << endl << "===============================" << endl;
	cout << "Product name : " << prod << endl;
	cout << "Item Code : " << id << endl;
	cout << "Quantity :        " << setw(10) << iNo << endl;
	cout << "Price per unit : " << setw(10) << dUnitPr << endl;
	cout << "Total Price :    " << setw(10) << dCustPrice << endl;
	cout << "Tax :            " << setw(10) << dTax << endl;
}
