#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double M, C1, C2, x1, y1, x2, y2;

	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;

	M = (y2 - y1) / (x2 - x1);
	cout << "M = ("<<y2<<" - "<<y1<<") - ("<<x2<<" - "<<x1<<")" << endl;
	cout << "M = " << M<<endl;
	C1 = y1 - (M)*x1;
	C2 = y2 - (M)*x2;
	cout << "Equation of the line with endpoints (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") are:" << endl;
	cout << "Y = " << M << "X + " << C1<<endl;
	cout << "Y = " << M << "X + " << C2;

	return 0;

}