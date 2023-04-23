//                                 Program to calculate the sum of any three digits                                   //
//********************************************************************************************************************//
#include <iostream>										// inputs and outputs
#include <cstdlib>										// standard library
#include <cmath>										// math function

using namespace std;									// standard library

int main()												// main program
{
	int number, digitA, digitB, digitC, sum;			// delcare variables
	cout<<"Please enter a three digit number"<<endl;	// user prompt
	cin>>number;										// input
	
	digitA = number % 10;								// ones place number extraction								
	digitB = number/10 % 10;							// tens place number extraction
	digitC = number/100 % 10;							// hundreds place number extraction
	sum = digitA+digitB+digitC;							// sum of digits
	sum = abs(sum);										// ignore input polarity as no contribution to digit value
	cout<<"The sum of the digits of your number is "<<	// print sum
	sum<<endl;
	
	system("PAUSE");									// end of program
	return EXIT_SUCCESS;
}
