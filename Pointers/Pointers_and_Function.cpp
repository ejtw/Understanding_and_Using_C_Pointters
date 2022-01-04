#include <iostream>
using namespace std;

void func1(int numVal1, int numVal2)
{
	int temp;
	temp = numVal1;
	numVal1 = numVal2;
	numVal2 = temp;
}

void func2(int &numVal1, int &numVal2)
{
	int temp;
	temp = numVal1;
	numVal1 = numVal2;
	numVal2 = temp;
}

void func3(int *numVal1, int *numVal2)
{
	int temp;
	temp = *numVal1;
	*numVal1 = *numVal2;
	*numVal2 = temp;
}

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "[Original Value] num1: " << num1 << " num2: " << num2 << endl;
	// pass by value
	func1(num1, num2);
	cout << "[In func1 transfer] num1: " << num1 << " num2: " << num2 << endl;
	//pass by address
	func2(num1, num2);
	cout << "[In  func2 transfer] num1: " << num1 << " num2: " << num2 << endl;
	//pass by address
	func3(&num1, &num2);
	cout << "[In  func3 transfer] num1: " << num1 << " num2: " << num2 << endl;
}