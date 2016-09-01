/*Coding the 99 Bottles of Beer Song*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int bottles;

	for (int bottles = 99; bottles > 2; bottles--)
	{
		cout << "\n\t\t\t" << bottles << " bottles of beer on the wall, " << bottles << " bottles of beer.";
		cout << "\n\t\t\t Take one down, pass it around, ";
		cout << bottles - 1 << "\n\t\t\t bottles of beer on the wall." << endl;
	} 
	if (int bottles = 2)
	{
		cout << "\n\t\t\t 2 bottles of beer on the wall, 2 bottles of beer.";
		cout << "\n\t\t\t Take one down, pass it around, ";
		cout << "\n\t\t\t 1 more bottle of beer on the wall.";
		cout << "\n\n";
	}
	
	cout << "\n\t\t\t Last bottle of beer on the wall, last bottle of beer.";
	cout << "\n\t\t\t Take it down, pass it around, ";
	cout << "\n\t\t\t no more bottles of beer on the wall.";
	cout << "\n\n" << endl;

	system("PAUSE");
	cout << "\n\t\t\t You're all out. GET MORE BEER DAMMIT!!!" << endl;

	system("PAUSE");
	return 0;
}
