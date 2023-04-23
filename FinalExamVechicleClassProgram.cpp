#include <cstdlib>																// standard library
#include <iostream>																// inputs/outputs
#include <cmath>																// math functions

using namespace std;															// standard library

class vehicleBrand																// define class of vehicleBrand
{
	public:																		// public available data
		void hudDisplay (bool onoff);											// member functions
		void temperatureComfort (int temp);
		void musicConsole (int genre);
		void gearDisplay (char gear);
	private:																	// private data
		bool engineOn;															// data members
		int internalTemperature, selectMusic;
		char selectGear;
};

int main ()																		// main program
{
cout<<"Welcome to the test drive! Please select your vehicle."<<endl;			// welcome message
cout<<"Enter 1 for Kia, 2 for Honda, or 3 for Benz."<<endl;						// prompt to initialize brand descision
int brand;																		// declare brand variable
cin>>brand;																		// user choice of brand input
if (brand==1)																	// kia brand program
{cout<<"You have chosen a Kia!"<<endl;											// brand choice displayed
vehicleBrand Kia;																// define kia brand
cout<<"Start vehicle? Enter 1 to start."<<endl;									// prompt to start vehicle
bool onoff;																		// declare engine status variable
cin>>onoff;																		// user input
Kia.hudDisplay (onoff);															// define member function for kia
int temp;																		// declare temp variable
temp=brand*28;																	// temp calc
Kia.temperatureComfort (temp);													// define member function for kia
cout<<"Why dont you put some music on!"<<endl;									// prompt for music choice
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;																		// declare genre variable
cin>>genre;																		// user choice of music input
Kia.musicConsole (genre);														// define memeber fuction for kia
cout<<"You are in Park. You can change gears and start driving now."<<endl;		// prompt for gear selection
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;																		// declare gear variable
cin>>gear;																		// user choice of gear input
Kia.gearDisplay (gear);															// define member function for kia
};
if (brand==2)																	// honda brand program
{cout<<"You have chosen a Honda!"<<endl;										// brand choice displayed
vehicleBrand Honda;																// define honda brand
cout<<"Start vehicle? Enter 1 to start."<<endl;									// prompt to start vehicle
bool onoff;																		// declare engine status variable
cin>>onoff;																		// user input
Honda.hudDisplay (onoff);														// define member function for honda
int temp;																		// declare temp variable
temp=brand*31;																	// temp calc
Honda.temperatureComfort (temp);												// define member function for honda
cout<<"Why dont you put some music on!"<<endl;									// prompt for music choice
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;																		// declare genre variable
cin>>genre;																		// user choice of music input
Honda.musicConsole (genre);														// define memeber fuction for honda
cout<<"You are in Park. You can change gears and start driving now."<<endl;		// prompt for gear selection
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;																		// declare gear variable
cin>>gear;																		// user choice of gear input
Honda.gearDisplay (gear);														// define member function for honda
};
if (brand==3)																	// benz brand program
{cout<<"You have chosen a Benz!"<<endl;											// brand choice displayed
vehicleBrand Benz;																// define benz brand
cout<<"Start vehicle? Enter 1 to start."<<endl;									// prompt to start vehicle
bool onoff;																		// declare engine status variable
cin>>onoff;																		// user input
Benz.hudDisplay (onoff);														// define member function for benz
int temp;																		// declare temp variable
temp=brand*31;																	// temp calc
Benz.temperatureComfort (temp);													// define member function for benz
cout<<"Why dont you put some music on!"<<endl;									// prompt for music choice
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;																		// declare genre variable
cin>>genre;																		// user choice of music input
Benz.musicConsole (genre);														// define memeber fuction for benz
cout<<"You are in Park. You can change gears and start driving now."<<endl;		// prompt for gear selection
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;																		// declare gear variable
cin>>gear;																		// user choice of gear input
Benz.gearDisplay (gear);														// define member function for benz
};
int k;																			// end program
cin>>k;
return 0;
}

void vehicleBrand::hudDisplay (bool onoff)										// member function 1
{engineOn=onoff;																// attribute to data member
	if (engineOn==1)															// check value
	{cout<<"Vehicle has started. Have a safe trip!"<<endl;}						// for 1 value
	else
	{cout<<"Vehicle is off."<<endl;}											// for 0 value
}
void vehicleBrand::temperatureComfort(int temp)									// member function 2
{internalTemperature=temp;														// attribute to data member
cout<<"Current in car temp is   "<<temp<<'F'<<endl;								// output current temp
cout<<"Adjusting to a more comfortable temp of 65F"<<endl;						// outputs comfort temp
int Newtemp;																	// declare Newtemp variable
Newtemp = 65;																	// initialize Newtemp
if (temp<Newtemp)																// below threshold check
{Newtemp=(Newtemp-temp)+temp;}													// calc
else (temp>Newtemp);															// above threshold check
{Newtemp=temp-(temp-Newtemp);}													// calc
cout<<"New temperature is "<<Newtemp<<'F'<<endl;								// output of final value once comfortable
}
void vehicleBrand::musicConsole(int genre)										// member function 3
{selectMusic=genre;																// attribute to data member
if (genre==1)																	// selector structure of int inputs
{cout<<"You've selected Rock 107.1 FM. Enjoy the music!"<<endl;};				// output choice 1
if (genre==2)
{cout<<"You've selected Blues 93.3 FM. Enjoy the music!"<<endl;};				// output choice 2
if (genre==3)
{cout<<"You've selected Country 97.7 FM. Enjoy the music!"<<endl;};				// output choice 3
if (genre==4)
{cout<<"You've selected Pop 101.5 FM. Enjoy the music!"<<endl;};				// output choice 4
}
void vehicleBrand::gearDisplay(char gear)										// member function 4
{selectGear=gear;																// attribute to data member
if (gear=='p')																	// selector structure of char inputs
{cout<<"Vehicle is in Park."<<endl;};											// output choice 1
if (gear=='d')
{cout<<"Vehicle is now in Drive."<<endl;};										// output choice 2
if (gear=='l')
{cout<<"Vehicle is in Low Locked 4x4 mode. Have fun offroad!"<<endl;};			// output choice 3
if (gear=='h')
{cout<<"Vehicle is in High 4x4 mode. Be careful in the snow!"<<endl;};			// output choice 4
}
