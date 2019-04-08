#pragma once

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class Polynom
{
public:
	int n;
	double* koef;
	Polynom();
	Polynom(int an);
	Polynom(const Polynom&);
	~Polynom();
	int getn();
	double getkoef(int);
	Polynom operator+(const Polynom&);
	Polynom operator-(const Polynom&);
	Polynom operator=(const Polynom&);
	friend ostream& operator<< (ostream& s, const Polynom& c); // ������������� �������� ������
	friend istream& operator >> (istream& s, Polynom& c); // ������������� �������� �����
	double& operator()(int i)
	{
		return koef[i];
	}
};
