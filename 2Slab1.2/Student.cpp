#include "Student.h"
#include <iostream>
using namespace std;

void Student::setName(string value)
{
	name = value;
}
bool Student::setNo(int value)
{
	if (value > 0)
	{
		no = value;
		return true;
	}
	else
	{
		no = 0;
		return false;
	}
}
bool Student::setAng(double value)
{
	if (value > 0)
	{
		ang = value;
		return true;
	}
	else
	{
		ang = -value;
		return false;
	}
}
bool Student::setHistory(double value)
{
	if (value > 0)
	{
		history = value;
		return true;
	}
	else
	{
		history = -value;
		return false;
	}
}

bool Student::setMath(double value)
{
	if (value > 0)
	{
		math = value;
		return true;
	}
	else
	{
		math = -value;
		return false;
	}
}
bool Student::Init(string name, int no, double ang, double history, double math)
{
	setName(name);
	return setNo(no) && setAng(ang) && setHistory(history) && setMath(math);
}
void Student::Read()
{
	string name;
	int no;
	double ang;
	double history;
	double math;
	cout << " name = ? "; cin >> name;
	do
	{
		cout << " no = ? "; cin >> no;
		cout << " ang = ? "; cin >> ang;
		cout << " history = ? "; cin >> history;
		cout << " math = ? "; cin >> math;
	} while (!Init(name, no, ang, history, math));
}
void Student::Display() const
{
	cout << " name = " << name << endl;
	cout << " no = " << no << endl;
	cout << " ang = " << ang << endl;
	cout << " history = " << history << endl;
	cout << " math = " << math << endl;
}
int Student::countUnsatisfactoryGrades() const {
	int unsatisfactoryCount = 0;
	if (ang < 60)
		unsatisfactoryCount++;
	if (history < 60)
		unsatisfactoryCount++;
	if (math < 60)
		unsatisfactoryCount++;
	return unsatisfactoryCount;
}
