#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class stringmanip
{
	public:
		void menu();
		void stringaddition();
		void output();
};

void menu(){
	
	string word1;
	string word2;
	
	cout << "Input sentence one : " << endl;
	gets(word1);
	cout << "input sentence two : " << endl;
	gets(word2);
}

void stringaddition{
	string word3;
	
	word3 = word1 + word2;
}

void output{
	cout << "Output : " << word3 << endl;
	
}

int main()
{
	void menu();
	void output();
	getch();
	return0;	
}

