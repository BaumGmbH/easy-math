// EasyMath.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	string operation;

	cin >> operation;

	if (operation == "middlepoint")
	{
		int afterDidgidNumbers;
		int numberOne;
		int numberTwo;
		int incressAmount;
		int endAmount;

		cin >> afterDidgidNumbers;

		while (true)
		{
			cin >> numberOne;
			cin >> numberTwo;

			if (numberOne < numberTwo) break;
		}
		int d;

		cout << "OUT";
		cout << afterDidgidNumbers;
		incressAmount = 0,1 * afterDidgidNumbers;
		
		cin >> d;

		cout << incressAmount;

		
		cin >> d;

		while (numberOne != numberTwo && numberOne != numberTwo - incressAmount)
		{
			numberOne + incressAmount;
			numberTwo - incressAmount;
			cout << "NERV";
		}

		cout << "NOPE";
		endAmount = numberOne;
		cout << endAmount;
	}
}
