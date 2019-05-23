// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include "Stack.h"
using namespace std;

int main()
{
	int n, a;
	bool exist = true;

	cout << "Stack length: ";
	cin >> a;

	Stack s(a);

	for (int i = 0; i < a; i++)
	{
		s.Push(i);
		cout << i << " ";
	}

	while (exist)
	{
		cout << "\n1: Pop" << endl
			<< "2: Peek" << endl
			<< "3: Exit" << endl;

		cin >> n;

		switch (n)
		{
		case 1:
		{
			cout << "Element: " << s.Pop() << endl;
			break;
		}
		case 2:
		{
			cout << "Element: " << s.Peek() << endl;
			break;
		}
		case 3:
		{
			exist = false;
			break;
		}
		}
	}
}