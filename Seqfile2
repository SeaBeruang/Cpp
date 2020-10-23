#include <iostream> 
#include <string> 
using namespace std;

struct movies_t { 
string title; 
int year; 
} mine, yours;

void printmovie (movies_t movie);
int main ()
{ 
mine.title = "101 Dalmatians"; 
mine.year = 1996;
cout << "Enter title: "; 
getline (cin,yours.title); 
cout << "Enter year: "; 
cin >> yours.year;
cout << "My favorite movie is:\n ";
printmovie (mine); cout << "And yours is:\n "; 
printmovie (yours); 
return 0;
}
void printmovie (movies_t movie)
{
cout << movie.title;
cout << " (" << movie.year << ")\n";
}


