#include <iostream>
#include <cstdlib>
using namespace std;

// define function
int minval(int x[], int n); // sending array variable and its size

int main() 
{
int x[4] = {11, 9, 7, 5}; // array declaration

cout<<"The minimum value is "<<minval(x,4)<<endl;	// function call
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
// implement function
int minval(int x[], int n)
{
	int min_x;
	min_x = x[0]; //store first value
	for (int k=1;k<4;++k) // for each value
{
	if (x[k]<min_x)
	min_x = x[k];
	else
	cout << "move to next" <<endl;
}
return min_x;
}
