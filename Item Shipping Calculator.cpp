#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

int main() {

	//store total cost of shipping, program will only read numbers

	double totalCost = 0;

	//store item name, the program will type out the text that appears when prompted to enter the item name

	string itemName;

	cout << "Please enter the item name (no spaces)........:";

	cin >> itemName;

	//check if is fragile

	char isFragile;

	cout << "Is the item fragile (y=yes/n=no)............:";

	cin >> isFragile;

	//if item is fragile add 2

	if (isFragile == 'y' || isFragile == 'Y') {

		totalCost += 2;

	}
	else if (isFragile != 'n' && isFragile != 'N') { //if else show error, when program detects anything else besides what its coded to read, it will read it as error

		cout << "Invalid entry, exiting" << endl;

		return 0;

	}

	//get order total, program will calculate order total from shipping destination and order cost

	double orderTotal;

	cout << "Please enter your order total.................:";

	cin >> orderTotal;

	string destination;

	cout << "Please enter destination. (usa/can/aus/rus).......:";

	cin >> destination;

	//change to upper case all

	transform(destination.begin(), destination.end(), destination.begin(), ::toupper);

	transform(itemName.begin(), itemName.end(), itemName.begin(), ::toupper);

	if (destination.compare("USA") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 6;

		}
		else if (orderTotal <= 100) {

			totalCost += 9;

		}
		else if (orderTotal <= 150) {

			totalCost += 12;

		}

	}
	else if (destination.compare("CAN") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 8;

		}
		else if (orderTotal <= 100) {

			totalCost += 12;

		}
		else if (orderTotal <= 150) {

			totalCost += 15;

		}

	}
	else if (destination.compare("AUS") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 10;

		}
		else if (orderTotal <= 100) {

			totalCost += 14;

		}
		else if (orderTotal <= 150) {

			totalCost += 17;

		}

	}
	else if (destination.compare("RUS") == 0) {

		if (orderTotal <= 50.00) {

			totalCost += 12;

		}
		else if (orderTotal <= 100) {

			totalCost += 16;

		}
		else if (orderTotal <= 150) {

			totalCost += 19;

		}

	}
	else {

		cout << "Invalid entry, exiting" << endl;

		return 0;

	}
	//show text for item name, shipping cost, destination, and total
	cout << "Your item is ................................" << itemName << endl;

	cout << "Your shipping cost is .......................$" << totalCost << endl;

	cout << "You are shipping to.........................." << destination << endl;

	cout << "Your total shipping costs are................$" << totalCost + orderTotal << endl;

	return 0;

}