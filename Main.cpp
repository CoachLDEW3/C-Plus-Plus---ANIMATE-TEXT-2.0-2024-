/************************************************************************************************
	Name:		CoachLDEW
	Date:		08.22.2024
	Purpose:	This program animates text using a double for loop.  One to print out each letter
				of the text and one to delay that printing so it looks like it's being typed out 
				in real time
*************************************************************************************************/


#include <iostream>
#include <stdlib.h>


using namespace std;


void TextAnimation(const char a[100])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		for (double j = 0; j < 30000000; j++);
		{
			cout << a[i];
		}
	}
}


int main()
{
	TextAnimation("Hello Everyone! How are you all?");

	return 0;
}