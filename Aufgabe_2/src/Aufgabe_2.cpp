#include <iostream>
using namespace std;



int main() {
	int intZahl, intRest;
	cout << "Zahl eingeben: " << endl;
	cin >> intZahl;

	while (intZahl != 0) {

		intRest = intZahl % 2;

		if (intRest == 0) {

			cout << "0";

		} else {

			cout << "1";

		}

		intZahl = intZahl / 2;

	}

	return 0;
}
