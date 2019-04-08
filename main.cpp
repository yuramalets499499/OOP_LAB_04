#include<iostream>
#include<iomanip>
#include<fstream>
#include"Polyunom.h"
using namespace std;
int main()
{
	int n, m;
	cout << "Stepin A and stepin B:" << '\n';
	cin >> n >> m;
	Polynom A(n), B(m), D, K;
	cout << "Koeficient of Polinom A:" << '\n';
	cin >> A;
	cout << "Koeficient of Polinom B:" << '\n';
	cin >> B;
	cout << setw(17) << "Mnogochlen A:" << setw(5) << A << '\n';
	cout << setw(17) << "Mnogochlen B:" << setw(5) << B << '\n';
	cout << setw(17) << "Mnogochlen D=A+B:" << setw(5) << (D = A + B) << '\n';
	cout << setw(17) << "Mnogochlen K=A-B:" << setw(5) << (K = A - B) << '\n';
	system("pause");
}