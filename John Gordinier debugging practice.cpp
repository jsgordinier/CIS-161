// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Method1();
void Method2();
void Method3();

int main()
{
	string Pause;
	const int SIZE = 6;
	string Names[SIZE] = { "Name1", "Name2", "Name3", "Name4", "Name5", "Name6" };

	cout << "In Main " << endl;

	for (int index = 0; index < SIZE; index++)
	{
		cout << Names[index] << endl;
	}

	Method1();
	cout << "In Main " << endl << endl;
	Method3();
	cout << "In Main " << endl << endl;

	int temp = 4;

	for (int i = 1; i <= 10; i++)
	{
		if (i > 6)
			temp = 5;
	}

	std::cout << "Press a key to exit" << endl;
	std::cin >> Pause;

	return 0;

}

void Method1()
{
	cout << ("Break Point in Method1") << endl;
	Method2();
}

void Method2()
{
	cout << ("Break Point in Method2") << endl;  // BreakPoint
	cout << ("Break Point in Method2") << endl;  // BreakPoint
}

void Method3()
{
	cout << ("Break Point in Method3") << endl;  // Breakpoint
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
