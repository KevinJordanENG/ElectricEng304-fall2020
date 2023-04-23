#include <cstdlib> // functions
#include <iostream> // i/o
using namespace std; // std lib

// reference parameter
int FindMinimum(int &first, int &second);

int main()
{
	
int first, second; // declaration
first=45; second=60; // definition
cout<<&first<<"      "<<&second<<" Address locations-Main"<<endl; // address location
cout<<FindMinimum(first, second)<<endl; // function call	
	
	
	
	
	
	system ("PAUSE");
	return EXIT_SUCCESS;
}

// function implementation
int FindMinimum(int &A, int &B)
{
	if (A<B)
	{cout<<&A<<"     "<<"Address inside function call"<<endl;
	return A;}
	else
	{cout<<&B<<"     "<<"Address inside function call"<<endl;
	return B;}
}
