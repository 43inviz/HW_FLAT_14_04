#include <iostream>
#include "Flat.h"
using namespace std;




int main() {

	Flat flat1;
	flat1.input();
	cout << "\n";
	Flat flat2;
	flat2.input();
	Flat flat3;
	int choice;
	do {
		cout << "1 - compare by Area\n2 - copy object\n3 - compare by cost price\n0 - EXIT\nEnter choice:  ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (flat1 == flat2) {
				cout << "Area EQUAL\n";

			}
			else {
				cout << "Area DIFFERENT\n";
			}
			break;
		case 2:
			
			cout << "FLAT 3 = FLAT 1 \n";
			flat3 = flat1;
			flat3.show();
			cout << "\n";
			break;
			
		case 3:
			if ((flat1 > flat2) == 1) {
				flat1.show();
				
			}
			else if ((flat1 > flat2) == 0) {
				cout << "Cost EQUAL\n";

			}
			else {
				flat2.show();
			}
			break;
		default:
			break;
		}

	} while (choice >= 1 && choice <=3);

	return 0;
}