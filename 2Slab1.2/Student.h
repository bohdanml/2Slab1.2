#pragma once
#include <string>
using namespace std;
class Student
{
private:
	string name;
	int no;
	double ang;
	double history;
	double math;
public:
	string getName() const { return name; }
	int getNo() const { return no; }
	double getAng() const { return ang; }
	double getHistory() const { return history; }
	double getMath() const { return math; }
	void setName(string);
	bool setNo(int);
	bool setAng(double);
	bool setHistory(double);
	bool setMath(double);
	double getVartist() const { return (ang + history + math) / 3; }
	bool Init(string name, int no, double ang, double history, double math);
	void Read();
	void Display() const;
	int countUnsatisfactoryGrades() const;
};