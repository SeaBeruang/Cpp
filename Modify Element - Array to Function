#include <iostream>
#include <iomanip>
using namespace std;
void modifyArray(int[], int);
void modifyElement (int *);

int main()
{
	const int arraySize=5;
	int a[arraySize]={0,1,2,3,4};
	
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
