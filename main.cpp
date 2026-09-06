#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	//create a few starter objects
	Starter_Object s1;
	Starter_Object s2;
	
	//add some values to test out your values methods
	s1.val1(10);
	s2.val1(25);
	
	//print out all the values for each object to validate your code
	cout << s1.val1() << endl;
	cout << s2.val1() << endl;
	cout << "^^This is my output!" << endl;

	return 0;
}
