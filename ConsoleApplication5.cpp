#include <iostream>
#include <iomanip>
using namespace std;

#define US 1.000
#define Euro 0.734719
#define Yuan 6.346934
#define Koruna 18.77263
#define Krone 5.449007
#define Sheqel 3.726334
#define Dinar 0.274588

int main()
{
	double Peso;
	double USD;
	double Pound;
	double Chinese;
	double Czech;
	double Norway;
	double Israel;
	double Kuwait;
	cout << "Enter Philippine Peso ";
	cin >> Peso;
		
	USD = Peso * US;
	cout << "Peso to US conversion is " << USD << endl;
	Pound = Peso * Euro;
	cout << "Peso to Euro conversion is " << fixed << setprecision(5) << Pound << endl;
	Chinese = Peso * Yuan;
	cout << "Peso to Yuan conversion is " << fixed << setprecision(5) << Chinese << endl;
	Czech = Peso * Koruna;
	cout << "Peso to Koruna conversion is " << fixed << setprecision(5) << Czech << endl;
	Norway = Peso * Krone;
	cout << "Peso to Krona conversion is " << fixed << setprecision(6) << Norway << endl;
	Israel = Peso * Sheqel;
	cout << "Peso to Sheqel conversion is " << fixed << setprecision(6) << Israel << endl;
	Kuwait = Peso * Dinar;
	cout << "Peso to Dinar conversion is " << fixed << setprecision(6) << Kuwait << endl;
	return 0;

}
