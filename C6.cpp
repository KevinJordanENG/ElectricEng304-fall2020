#include <iostream>							// inputs and outputs
#include <fstream>							// file stream general

using namespace std;						// using standard library

int main ()									// main program
{
	string import;							// placeholder for file to import
	ifstream myfile ("C6.txt");				// define file to input
	
	if (myfile.is_open())					// if file is open...
	{
		while (getline (myfile, import))	// loop to get text data
		{
			cout<<import<<'\n';				// print all characters
		}
		myfile.close();						// close after no more data in file
	}
	else cout<<"File not open"<<endl;		// error message if file name is missing
	
	system ("PAUSE");						// end program
	return 0;
}
