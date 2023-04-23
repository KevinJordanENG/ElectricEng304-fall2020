#include <cstdlib> // General Functions
#include <iostream> // Input and Output 
using namespace std; //Standard Library
// Functions Delcared
int squ(int);
int cub(int);
// Main Program Specification File
int main() 
{
cout<<"The result of the square function is"<<"  "<<squ(30)<<endl;
cout<<"The result of the cube function is"<<"  "<<cub(18)<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
// Implementation of Functions
int squ(int n)
{return n*n;
}
int cub(int m)
{return m*m*m;
}
