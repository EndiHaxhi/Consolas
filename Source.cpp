#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cassert>
#include <fstream>

using namespace std;

double larger(double x, double y);
double maximum(double x, double y, double z);

int main()
{
	double num1, num2, num3;

	cout << "Enter 3 numbers: " << endl;
	cin >> num1 >> num2 >> num3;

	cout << maximum(num1, num2, num3) << " is the biggest number." << endl;

	system("pause");
}
double larger(double x, double y)
{
	if(x > y)
		return x;
	else
		return y;
}

double maximum(double x, double y, double z)
{
	return larger( z, larger(x, y) );
}