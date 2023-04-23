#include <iostream>           						// inputs and outputs

using namespace std;								// using standard library

int main ()											// main program
{
	int rows = 5, cols = 5;							// initialize and define matrix size variables
	int a[]	= { 1, 2, 3, 4, 5};						// value input for row 1
	int b[] = { 6, 7, 8, 7, 6};						// value input for row 2
	int c[] = { 5, 4, 3, 4, 5};						// value input for row 3
	int d[] = { 6, 7, 8, 7, 6};						// value input for row 4
	int e[] = { 5, 4, 3, 2, 1};						// value input for row 5
	int* MatrixA[] = {a, b, c, d, e};				// pointer for matrix to rows
	
	for (int i = 0; i < rows; i++)					// loop to take each row
		{
			for (int j = 0; j < cols; j++)			// loop to take each column
			{
				cout << MatrixA[i][j] << "  " ;		// print matrix elements of the ith row jth column
			}
			cout << endl;							// change to next row
		}	
	int k;											// end program with no extra screen output
	cin>>k;
	return 0;
}
