#include <iostream> 					// inputs and outputs
using namespace std; 					// standard library

class Ratio								// define class Ratio
{
	public:								// make responsibilities public
		void assign (int n, int d);		// responsibility 1
		double convert ();				// responsibility 2 (not yet implemented)
		void invert ();					// responsibility 3 (not yet implemented)
		void print ();					// responsibility 4 (not yet implemented)
	private:							// make private some values
int num, den;							// delcatre privates
};

int main ()								// main program
{Ratio x;								// define x
x.assign (22,7) ;						// define responsibility 1
int k;									// return blank
cin>>k;
return 0;}

void Ratio::assign (int n, int d)		// always use assign from Ratio
{
num=n;									// assign num
den=d;									// assign den
cout<<num<<" "<<den<<endl;				// output num and den
}
