#include <iostream>

using namespace std;

int main()
{
	int a, b;
	string abjad[26] = { "A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J ", "K ", "L ", "M ", "N ", "O ", "P ", "Q ", "R ", "S ", "T ", "U ", "V ", "W ", "X ", "Y ", "Z " };
	for (a = 0; a <= 25; a++) {
		for (b = a; b <= 25; b++) {
			cout << abjad[b];
		}
		cout << endl;
	}
}
