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
 
	const int arraySize=8;
	
	int a[arraySize]={array[c]};
	
	cout << "Original Array: ";
	for (int i=0; i<arraySize; i++)
	{
		cout <<setw(3) << a[i]; //setw itu untuk motong/nyekat array jadi 3 bagian
	}
	cout << endl;
	
	modifyArray(a, arraySize);
	cout << "Modified Array: ";
	for (int i=0; i<arraySize; i++)
	{
		cout << setw(3) <<a[i];
	}
	cout << endl;
	
	modifyElement(&a[3]); //
	cout << "Modified Element a[3]: "; //kalo di dalam kotaknya diubah angkanya maka output di dalam array akan dikalikan sama 3.
	for (int i=0; i<arraySize; i++)
	{
		cout << setw(3) <<a[i];
	}
	cout << endl;
	return 0;
}

void modifyArray(int b[], int sizeOfArray)
{
	for (int k=0; k<sizeOfArray; k++)
	{
		b[k]*=2;
	}
}
void modifyElement(int *c)
{
	*c *=3;
}
