#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;


  
  
  int main()
{ 
   const int SIZE = 5;                       // Size of the array
   int numbers[SIZE] = {10, 20, 30, 40, 50}; // Array of integers
   int count;                                // Counter variable
   string ordinal[SIZE] = { "first", "second", "third", "fourth", "fifth"};
    
  
   for (count = 0; count < SIZE; count++)   
                                          //print out each number in a separate sentence identifying the order of each number.                                     
       cout << "The" << ordinal[count] << "element in the array is " << *(numbers + count) << "." << endl;
  
   return 0;
}

