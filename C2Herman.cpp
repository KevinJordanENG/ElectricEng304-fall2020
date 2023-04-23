//*************************************************************************
// PrintName program
// This program prints a name in two different formats
//*************************************************************************
#include <iostream>								// for cout and endl
#include <string>								// for data type string
using namespace std;
const string FIRST = "Herman";					// Person's frist name
const string LAST = "Smith";					// Person's last name
const char MIDDLE = 'G';						// Person's middle initial
int main()
 {
		string	firstLast;						// Name in first-last form
		string	lastFirst;						// Name in last-first from
		firstLast = FIRST + " " + LAST;
		cout << "Name in first-last format is " << endl
			<< firstLast << endl;
		lastFirst = LAST + ", " + FIRST + ' ';
		cout << "Name in last-first format is " << endl
			<< lastFirst << MIDDLE << '.' << endl;
			int k;
			cin >> k;
	return 0;
}
