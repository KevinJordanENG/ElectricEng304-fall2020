#include <iostream> 										// i/o
#include <cstdlib> 											// general functions
#include <cmath>											// math functions
using namespace std; 										// using std lib
int main() 													// main program
 {
float a, b, c, root1, root2, deter, real, imag; 			// declared variables
cout<<"Quadratic equation root finder ax^2 + bx + c"<<endl;	// user display
cout<<"Please endter coefficiet a "<< endl; 				// user prompt
cin>>a; 													// user input
cout<<"Please endter coefficiet b "<< endl;					// user prompt
cin>>b;														// user input
cout<<"Please endter coefficiet c "<< endl;					// user prompt
cin>>c;														// user input
deter = ((b*b)-(4*a*c));									// determinant calc to decide if/else flow

if (deter>0)												// condition 1
{root1 = (-b+sqrt(deter))/(2*a);							// calc
root2 = (-b-sqrt(deter))/(2*a);								// calc
cout << "Root 1, x =  "<< root1 << endl;					// program output
cout << "Root 2, x =  "<< root2 << endl;}					// program output

else if (deter==0)											// condition 2
{root1 = (-b+sqrt(deter))/(2*a);							// calc
cout << "Root 1&2, x =  " << root1 << endl;}				// program output

else														// condition 3
{real = (-b)/(2*a);											// calc
imag = (sqrt(-1*deter))/(2*a);								// calc
cout << "Root 1, x = "<< real << "+j" << imag << endl;		// program output
cout << "Root 2, x = "<< real << "-j" << imag << endl;}		// program output

system("PAUSE");											// end program
return EXIT_SUCCESS;
}



