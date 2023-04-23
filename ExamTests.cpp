#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class vehicleBrand
{
	public:
		void hudDisplay (bool onoff);
		void temperatureComfort (int temp);
		void musicConsole (int genre);
		void gearDisplay (char gear);
	private:
		bool engineOn;
		int internalTemperature, selectMusic;
		char selectGear;
};

int main ()
{
cout<<"Welcome to the test drive! Please select your vehicle."<<endl;
cout<<"Enter 1 for Kia, 2 for Honda, or 3 for Benz."<<endl;
int brand;
cin>>brand;
if (brand==1)
{cout<<"You have chosen a Kia!"<<endl;
vehicleBrand Kia;
cout<<"Start vehicle? Enter 1 to start."<<endl;
bool onoff;
cin>>onoff;
Kia.hudDisplay (onoff);
int temp;
temp=brand*28;
Kia.temperatureComfort (temp);
cout<<"Why dont you put some music on!"<<endl;
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;
cin>>genre;
Kia.musicConsole (genre);
cout<<"You are in Park. You can change gears and start driving now."<<endl;
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;
cin>>gear;
Kia.gearDisplay (gear);
};
if (brand==2)
{cout<<"You have chosen a Honda!"<<endl;
vehicleBrand Honda;
cout<<"Start vehicle? Enter 1 to start."<<endl;
bool onoff;
cin>>onoff;
Honda.hudDisplay (onoff);
int temp;
temp=brand*31;
Honda.temperatureComfort (temp);
cout<<"Why dont you put some music on!"<<endl;
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;
cin>>genre;
Honda.musicConsole (genre);
cout<<"You are in Park. You can change gears and start driving now."<<endl;
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;
cin>>gear;
Honda.gearDisplay (gear);
};
if (brand==3)
{cout<<"You have chosen a Benz!"<<endl;
vehicleBrand Benz;
cout<<"Start vehicle? Enter 1 to start."<<endl;
bool onoff;
cin>>onoff;
Benz.hudDisplay (onoff);
int temp;
temp=brand*31;
Benz.temperatureComfort (temp);
cout<<"Why dont you put some music on!"<<endl;
cout<<"Preset radio stations 1, 2, 3, & 4 are available."<<endl;
int genre;
cin>>genre;
Benz.musicConsole (genre);
cout<<"You are in Park. You can change gears and start driving now."<<endl;
cout<<"Gears available to shift to are P, D, L, and H (in lowecase)."<<endl;
char gear;
cin>>gear;
Benz.gearDisplay (gear);
};
cout<<Kia.gearDisplay;

int k;
cin>>k;
return 0;
}

void vehicleBrand::hudDisplay (bool onoff)
{engineOn=onoff;
	if (engineOn==1)
	{cout<<"Vehicle has started. Have a safe trip!"<<endl;}
	else
	{cout<<"Vehicle is off."<<endl;}
}
void vehicleBrand::temperatureComfort(int temp)
{internalTemperature=temp;
cout<<"Current in car temp is   "<<temp<<'F'<<endl;
cout<<"Adjusting to a more comfortable temp of 65F"<<endl;
int Newtemp;
Newtemp = 65;
if (temp<Newtemp)
{Newtemp=(Newtemp-temp)+temp;}
else (temp>Newtemp);
{Newtemp=temp-(temp-Newtemp);}
cout<<"New temperature is "<<Newtemp<<'F'<<endl;
}
void vehicleBrand::musicConsole(int genre)
{selectMusic=genre;
if (genre==1)
{cout<<"You've selected Rock 107.1 FM. Enjoy the music!"<<endl;};
if (genre==2)
{cout<<"You've selected Blues 93.3 FM. Enjoy the music!"<<endl;};
if (genre==3)
{cout<<"You've selected Country 97.7 FM. Enjoy the music!"<<endl;};
if (genre==4)
{cout<<"You've selected Pop 101.5 FM. Enjoy the music!"<<endl;};
}
void vehicleBrand::gearDisplay(char gear)
{selectGear=gear;
if (gear=='p')
{cout<<"Vehicle is in Park."<<endl;};
if (gear=='d')
{cout<<"Vehicle is now in Drive."<<endl;};
if (gear=='l')
{cout<<"Vehicle is in Low Locked 4x4 mode. Have fun offroad!"<<endl;};
if (gear=='h')
{cout<<"Vehicle is in High 4x4 mode. Be careful in the snow!"<<endl;};
}
