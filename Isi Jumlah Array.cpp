#include <iostream>
using namespace std;

int main()
{
	int c, d , n, swap, number;
	cout << "Enter number of array : \n";
	cin >> number;
	int array[number];
	
	for (int a=0; a<number; a++){
 	cout<<"Input "<<a+1<<" ";
 	cin>>array[a];
	 }
 cout<<endl<<"Input array = { ";
 for(int k=0; k<number; k++)
  cout<<array[k]<<" ";
 cout<<"}"<<endl;
 
 for (c = 0 ; c < number; c++){
  for (d = 0 ; d < number-1; d++){
   if (array[d] > array[d+1]){
    swap = array[d];
    array[d] = array[d+1];
    array[d+1] = swap;
   }
  }
  cout <<"Pass " << c+1 << endl;
  for ( n = 0 ; n < 5 ; n++ )
   cout << array[n] <<" ";
  cout <<endl;
 }
 cout << "Sorted list in ascending order:\n" ;
 for ( c = 0 ; c < 5 ; c++ )
  cout << array[c] <<" ";
 
 return 0;
}

