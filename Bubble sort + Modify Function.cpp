#include <iostream>
#include <iomanip>
using namespace std;

void modifyArray(int[], int);
void modifyElement(int *);
void printArray(int[], int);

int main()
{
int n, c, d, swap;
int array[8]= {9, 10, 18, 2, 1, 5, 2, 3};
 for (c = 0 ; c <8 ; c++) //array
 {
 for (d = 0 ; d < 9; d++)
 {
 if (array[d] > array[d+1])
 {
 swap = array[d];
 array[d] = array[d+1];
 array[d+1] = swap;
 }
 }
 cout <<"Pass " << c+1 << endl;
 for ( n = 0 ; n < 8 ; n++ )
 cout << array[n] <<" ";
 cout <<endl;
 }
 cout << "Sorted list in ascending order:\n" ;
 for ( c = 0 ; c < 8 ; c++ )
 cout << array[c] <<" ";
 
 cout << " Modify Function";
 
 const int arraySize=array[c];
 
 int a[arraySize] ;
 cout <<"Original Array: ";
 printArray(a, arraySize);
 modifyArray(a, arraySize);
 cout <<"Modified Array : ";
 printArray(a, arraySize);
 modifyElement(&a[3]);
 cout <<"After modifying a[3] : ";
 printArray(a, arraySize);
 
 return 0;
}

void modifyArray(int b[], int sizeOfArray)
{
	for (int k=0; k<sizeOfArray; k++)
	{
		b[k]*=2;
	}
}
void modifyElement (int *c)
{
	*c *=3;
}

