#include<iostream>
#include<iomanip>
#include<time.h>
#include<stdlib.h>
using namespace std;


	string platmotor(int digit) //function for plat
{
	const int MAX = 26;
    char alphabet[MAX] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z' };
 
    string res;
    for (int i = 0; i < digit; i++) 
        res = res + alphabet[rand() % MAX];
     
    return res;
} 




 int main()
{                
   char motor[50] = {'A', 'B', 'C', 'D', 'E','F', 'G', 'H', 'I', 'J'};
   system("color f4");

   int i,plat,harga,jumlah,inst;
   int n = 6;
   int pilih, payment;
   const double TaxPercent = 1.5;
   char name[50];
   char address[50];

	char option;
    char upper[10] = {'A', 'B', 'C', 'D', 'E','F', 'G', 'H', 'I', 'J'};
    int price[10] = {10, 12, 15, 17, 20, 22, 23, 25, 27, 29};
    char kendaraan[5][20] = {" Kawasaki "," Yamaha "," Suzuki "," Ninja "," Honda "};
    
    cout <<":: Please input you name : ";
	gets(name);

	system("CLS");
	cout <<":: Welcome " << name << endl;
    
    cout << "============================================" << endl;
    cout << "  Here are the catalogues for motorcycle : " << endl;
    cout << "============================================" << endl;
	for(int j=0;j<5;j++)
	{
	cout << "|| "<<j+1<<". || " <<kendaraan[j]<< endl;
	}
    cout << "============================================" << endl;	
	
	cout << "\n\n:: Which motorcycle would you like to buy ? \n:: ";
	cin >> pilih;



	
	if (pilih < 1 && pilih > 5) 
   		{
   			
    		cout << "\n=====================================================" << endl;
			cout <<">> WRONG INPUT. You will have to restart the program." << endl;
			cout << "=====================================================" << endl;
					return 0;		
			return 0;		
		}
	
	cout << ":: Enter the quantity ? " << "\n:: ";
	cin >> jumlah;
	int g=pilih-1;
	

			
			system("CLS");
			cout << "=====================================================" << endl;                       
       		for (i = 0; i < jumlah; i++)
			cout << kendaraan[g] << *(motor + i) << "\t Rp. "<< price[g] << " Juta "<< "\t Plat #" << i+1 << " " << platmotor(n) << endl;
       		cout << "=====================================================" << endl;
       		cout << ":: press to continue to invoice" << endl;
			cin >> option;
			
			double total = jumlah * price[g];
			
			cout << ":: The amount of money you have to pay is " << total << "juta" << endl;
			cout << ":: What payment method would you like ? \n (1) Credit \n (2) Cash \n:: ";
			cin >> payment;



			
			double final = total + TaxPercent;
			
			
			
			
			
			if(payment == 1)
			{
				system("CLS");
				cout << ":: Choose the installment : \n [1] 3x installment \n [2] 6x installment \n [3] 4x installment " << endl;
				cin >> inst;
				
				if(inst == 1)
				{
				system("CLS");
				cout << ":: RECEIPT" << endl;
				cout << "=====================================================" << endl;
				cout << ":: Name : " << name << endl << endl;
				for (i = 0; i < jumlah; i++)				
				cout << ":: " << kendaraan[g] << *(motor + i) << "\t Rp. "<< price[g] << " Juta "<< "\t Plat #" << i+1 << " " << platmotor(n) << endl<< endl;
				cout << ":: Tax : Rp." << TaxPercent << "Juta" << endl;
				cout << ":: Total (before Installment) : Rp." << total + TaxPercent << endl;
				cout << "=====================================================" << endl;				
					cout << ":: With 3x Installment, the TOTAL is RP." << final/3 << "Juta paid every 4 months" << endl;
				}
				
				
				else if(inst == 2)
				{
				system("CLS");
				cout << ":: RECEIPT" << endl;
				cout << "=====================================================" << endl;
				cout << ":: Name : " << name << endl<< endl;
				for (i = 0; i < jumlah; i++)				
				cout << ":: "<< kendaraan[g] << *(motor + i) << "\t Rp. "<< price[g] << " Juta "<< "\t Plat #" << i+1 << " " << platmotor(n) << endl<< endl;
				cout << ":: Tax : Rp." << TaxPercent << "Juta" << endl;
				cout << ":: Total (before Installment) : Rp." << total + TaxPercent<< endl;
				cout << "=====================================================" << endl;				
					cout << ":: With 6x Installment, the TOTAL is RP." << final/6 << "Juta paid every 2 months" << endl;
				}
				
				
				else if(inst == 3)
				{
				system("CLS");
				cout << ":: RECEIPT" << endl;
				cout << "=====================================================" << endl;
				cout << ":: Name : " << name << endl<< endl;
				for (i = 0; i < jumlah; i++)				
				cout << ":: "<< kendaraan[g] << *(motor + i) << "\t Rp. "<< price[g] << " Juta "<< "\t Plat #" << i+1 << " " << platmotor(n) << endl << endl;
				cout << ":: Tax : Rp." << TaxPercent << "Juta" << endl;
				cout << ":: Total (before Installment) : Rp." << total + TaxPercent << endl;
				cout << "=====================================================" << endl;				
					cout << ":: With 4x Installment, the TOTAL is RP." << final/4 << " Juta paid every 3 months" << endl;
				}
				
				
				else
				{
					cout << "\n=====================================================" << endl;
					cout <<">> WRONG INPUT. You will have to restart the program." << endl;
					cout << "=====================================================" << endl;
					return 0;
				}



			}
			if(payment == 2)
			{
			system("CLS");
				cout << ":: RECEIPT" << endl;
				cout << "=====================================================" << endl;
				cout << ":: Name : " << name << endl<< endl;
				for (i = 0; i < jumlah; i++)				
				cout << ":: " << kendaraan[g] << *(motor + i) << "\t Rp. "<< price[g] << " Juta "<< "\t Plat #" << i+1 << " " << platmotor(n) << endl;
				cout << ":: Tax : Rp." << TaxPercent << "Juta" << endl;
				cout << "=====================================================" << endl;				
				cout << ":: TOTAL : Rp." << total + TaxPercent;
				cout << "=====================================================" << endl;				
			}
		}
