// =======================
//  By mrbenevolentcanard
// =======================



#include <iostream>
#include <windows.h>


using std::cout;
using std::cin;
using std::string;


void setColor(int textColor, int bgColor);



int main() {
	int referencePixels;
	double referenceDegrees;
	int pixels;
	double degrees;
	double PI = 3.141592653589793238462643383279502884;



	while (true) {
		cout << "*********************************************\n";
		cout << "          Pixel to Degree Converter\n";
		cout << "*********************************************\n\n";

		cout << "How many pixels long is the reference length?: ";
		cin >> referencePixels;
		cout << "What is the length in degrees?: ";
		cin >> referenceDegrees;

		cout << "\nHow many pixels long is the object?: ";
		cin >> pixels;
		degrees = pixels / (referencePixels / referenceDegrees);


		system("CLS");
		cout << "Result: ";

		setColor(7, 1);
		cout << degrees;
		setColor(7, 0);
		cout << " degrees or ";
		setColor(7, 1);
		cout << (degrees * PI / 180) * 1000;
		setColor(7, 0);
		cout << " millyradians.\n\n\n";
	} 

	return 0;
}



void setColor(int textColor, int bgColor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}