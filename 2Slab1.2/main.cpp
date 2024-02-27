#include <iostream>
#include "Student.h"
using namespace std;
int main()
{
	Student g;
	g.Read();
	g.Display();
	cout << g.getVartist() << endl;
	cout << "Number of unsatisfactory grades: " << g.countUnsatisfactoryGrades() << endl;
	return 0;
}