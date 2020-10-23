
#include<stdlib.h>
using namespace std;

double price(int itemCode);

int main(){

  double invoice[10][4];
  int i=0; char again; char date[100];

  cout << "\n\n===================== GENIE MARKET ======================" << endl;
cout << "\n\n================ EVERYTHING YOU WANT IS HE ================" << endl;
  cout << "\n\n Please enter the product you want";
  
    
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
  

  
  do {
 
    cout << "\n\nItem code: ";
    cin >> invoice[i][0];
    cout << "Quantity : ";
    cin >> invoice[i][1];
    
    invoice[i][2] = price(invoice[i][0]); 
    invoice[i][3] = invoice[i][1] * invoice[i][2]; 
    
    cout << "Do you have any other item you want to include ? (Y/N) ? ";
    cin >> again;
  
    i++;
  } while(again == 'y' || again == 'Y');
    
 
   string month2[13]={"None", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   cout << "Invoice for " << month2[y] << " " << x << ", " << z << endl;
  
	system("CLS");
	cout << "INVOICE FOR : " << month2 << endl;
  cout << "=============================================================" << endl;
  cout << "|| Item Code || Quantity || Price per unit || Total Price ||\n\n";
  int total=0;
  for(int k=0; k<i; k++)   
    
	{
		for(int l=0; l<4; l++) 
		{
		    cout << invoice[k][l]  << "\t";		   
		}
		cout << endl;
		total = total + invoice[k][3];
	}

  cout << "\n\nTotal : " << total;
  cout << "\n\n-----------------------------\n\n\n";
  
  return 0;
}

double price(int itemCode){
  double price;
  switch (itemCode)
  {
    case 1: price = 5000;
      break; 
    case 2: price = 2500;
      break;
    case 3: price = 4000;
      break;
    default: price = 0;
      break;
  }
  return price;
}
