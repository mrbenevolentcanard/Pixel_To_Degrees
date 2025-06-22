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
	const double PI = 3.141592653589793;



	while (true) {
		cout << "==================================================\n";
		cout << " Pixel to Degrees Converter by mrbenevolentcanard\n";
		cout << "==================================================\n\n";

		cout << "Enter the length of the reference distance (px): ";
		cin >> referencePixels;
		cout << "Enter that length (deg): ";
		cin >> referenceDegrees;

		cout << "\nEnter the distace you want to know in degrees (px): ";
		cin >> pixels;
		degrees = pixels / (referencePixels / referenceDegrees);


		system("CLS");
		cout << "Result: The distance is ";

		setColor(7, 1);
		cout << degrees;
		setColor(7, 0);
		cout << " degrees, or ";
		setColor(7, 1);
		cout << (degrees * PI / 180) * 1000;
		setColor(7, 0);
		cout << " millyradians long.\n\n\n";
	}

	return 0;
}



void setColor(int textColor, int bgColor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}