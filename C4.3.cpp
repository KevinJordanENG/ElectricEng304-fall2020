#include <cstdlib>
#include <iostream>

using namespace std;

// recursion

int fibonacci(int n); // declare function


int main()
{
int n; // declare n
	cout<<"Input the value of n"<<endl;
	cin>>n;
	cout<<"The corresponding number in the Fibonacci sequence is "<<endl;
	cout<<fibonacci(n)<<endl;
	
	
	
	system ("PAUSE");
	return EXIT_SUCCESS;
}

int fibonacci(int n)
{
	if (n==1)
	return 0;
	if (n==2)
	return 1;
	else
	return fibonacci(n-1)+fibonacci(n-2); // recursion
}
