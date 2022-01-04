#include <iostream>
using namespace std;

int main()
{
	// declare an int pointer
	int *pointVar;

	// dynamically allocate memory
	// using the new keywork
	pointVar = new int;

	// assign value to allocated memory
	*pointVar = 45;

	cout << "Pointer val: " << *pointVar << " Pointer address: " << pointVar << endl;
	delete pointVar;
	//cout << *pointVar;
	return 0;
}