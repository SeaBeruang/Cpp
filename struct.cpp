#include<iostream>
#include<cstring>
#include<fstream>//file stream
#include<cstdlib>

using namespace std;
struct student {
		char student_id[20];
		string name;
		double gpa;
};

int main()
{
	struct student IT;
	ofstream outClientFile("students.txt", ios::out);
	if (!outClientFile)
	{
		cerr<<"File could not be opened" <<endl; //cerr = Error output (Console ERRor)
		exit(1);
	}
	cout << "Enter the students id, name, and gpa" <<endl << "ctrl-z to end input" << endl;
	while (cin >> IT.student_id>> IT.name>> IT.gpa)
	{
		outClientFile<<IT.student_id<<' '<<IT.name<<' '<<IT.gpa<<endl;
		cout << "next ?";
	}
}
