#include "pch.h"
#include <iostream>

using namespace std;

void line(), message(); //Prototypes

int main()
{
    cout << "Hello World!" << endl; 
	line();
	message();
	line();
	cout << "At the end" << endl;

	return 0;
}

void line()
{
	cout << "-----" << endl;
}

void message()
{
	cout << "In function message()." << endl;
}
