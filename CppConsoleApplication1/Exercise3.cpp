#include "pch.h"
#include <iostream>

using namespace std;

void pause(); //Prototypes

int main()
{
	cout << endl << "Dear reader, "
		<< endl << "have a ";
	pause();
	cout << "!" << endl;

	return 0;
}

void pause()
{
	cout << 
		"BREAK";
}
